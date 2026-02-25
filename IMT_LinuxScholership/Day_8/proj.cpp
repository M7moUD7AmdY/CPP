#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <iomanip>
#include<cmath>
#include<algorithm>

using namespace std ;
//constance data
const double RATE_REGULAR=5.0;
const double RATE_VIP=10.0;
const double RATE_DISABLID=0.0;
const int TOTAL_SPOTS=20;
const double MIN_CHARGE=5.0;


struct ParkingSession
{
    string Plate;
    int SpotNumber;
    int EntryHour;
    int EntryMin;
    string SpotType;


};

struct Receipt
{
    string Plate;
    int SpotNumber;
    string EntryTime;
    string ExitTime;
    double Duration; //in hour
    double TotalCost;

};

//Data Storage

map<string,ParkingSession>ActiveSession; //palet -> current session
map<string,vector<Receipt>>History; //
map<int,bool>Spots;
map<int,string>SpotType;
map<int,int>HourlyTraffic;
double TotalRevenue;

//helpers
string FormatTime(int hour,int min) //"HH:MM"
{
    stringstream ss;
    ss<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<min;
    return ss.str();
}

double GetRate (string spottype)
{
    if(spottype == "VIP")return RATE_VIP;
    if(spottype == "DISABLIED")return RATE_DISABLID;
    
    return RATE_REGULAR;
}


void InitSpots()
{
    for(int i = 1; i <= 20; i++)
    {
        if(i < 15)
        {
            Spots[i]=true;
            SpotType[i] = "REGULAR";
        }
        else if(i < 18)
        {
            Spots[i]=true;
            SpotType[i] = "VIP";
        }
        else
        {
            Spots[i]=true;
            SpotType[i] = "DISABLED";
        }
    }
}

bool EnterParking(string plate, int hour, int min, string prefertype="REGULAR")
{
    //! not parked return
    if (ActiveSession.find(plate) != ActiveSession.end())
        return false;
    int selectedSpot = -1;
    //! Preferredtype search
    for (auto &p : Spots)
    {
        if (p.second == true && SpotType[p.first] == prefertype)
        {
            selectedSpot = p.first;
            break;
        }
    }
    //! != DISABLED
    if (selectedSpot == -1 && prefertype != "DISABLED")
    {
        for (auto &p : Spots)
        {
            if (p.second == true && SpotType[p.first] != "DISABLED")
            {
                selectedSpot = p.first;
                break;
            }
        }
    }
    //! false FULL return
    if (selectedSpot == -1)
        return false;
    // fill data
    ParkingSession S;
    S.Plate = plate;
    S.SpotNumber = selectedSpot;
    S.EntryHour = hour;
    S.EntryMin = min;
    S.SpotType = SpotType[selectedSpot];
    //spots -> false
    Spots[selectedSpot] = false;
    // active [platr]
    ActiveSession[plate] = S;
    //hourlyTraffic
    HourlyTraffic[hour]++;

    return true;
}


bool ExitParcking(string plate, int exithour, int exitmin)
{
    //check if the car are in parcking
    auto it = ActiveSession.find(plate);
    if (it == ActiveSession.end())
        return false; // car not found

    ParkingSession session = it->second;

    
    // calculate duration in minutes
    int entryTotal  = session.EntryHour * 60 + session.EntryMin;
    int exitTotal   = exithour * 60 + exitmin;
    int durationMin = exitTotal - entryTotal;

    // handle overnight parking
    if (durationMin < 0) durationMin += 24 * 60;

    double durationHours = durationMin / 60.0;

    // calculate cost
    double rate = GetRate(session.SpotType);
    double cost = durationHours * rate;

    // apply minimum charge (except for disabled spots)
    if (session.SpotType != "DISABLED")
        cost = max(cost, MIN_CHARGE);

    // round to nearest 0.5 EGP
    cost = round(cost * 2) / 2.0;

    // build receipt
    Receipt r;
    r.Plate = plate;
    r.SpotNumber = session.SpotNumber;
    r.EntryTime = FormatTime(session.EntryHour, session.EntryMin);
    r.ExitTime  = FormatTime(exithour, exitmin);
    r.Duration  = durationHours;
    r.TotalCost = cost;

    History[plate].push_back(r);
    TotalRevenue += cost;
    Spots[session.SpotNumber] = true;
    ActiveSession.erase(it);

    cout << "\n[RECEIPT] " << r.Plate << "\n"
         << string(35, '-') << "\n"

         << " Spot     : " << r.SpotNumber
         << " (" << session.SpotType << ")\n"

         << " Entry    : " << r.EntryTime << "\n"
         << " Exit     : " << r.ExitTime << "\n"

         << " Duration : "
         << fixed << setprecision(1)
         << r.Duration << " hrs\n"

         << " Rate     : " << rate << " EGP/hr\n"

         << " Total    : "
         << fixed << setprecision(1)
         << r.TotalCost << " EGP\n"

         << string(35, '-') << "\n";

    return true;
    
}

void DisplayAllSpots()
{
    int freeCount = 0;

    cout <<  setw(2) << "Spot"
         << setw(13) << "Status" << "\n";

    cout << string(25, '-') << "\n";

    for (const auto& spot : Spots)
    {
        int spotNumber = spot.first;
        bool isFree = spot.second;

        if (isFree)
            freeCount++;

        cout << setw(2) << spotNumber
             << setw(15) << (isFree ? "FREE" : "OCCUPIED")
             << "\n";
    }

    cout << string(25, '-') << "\n";
    cout << "Total Free Spots: " << freeCount << " : " << TOTAL_SPOTS << "\n";
}


void FindCar(string plate)
{
    // search in active sessions
    auto it = ActiveSession.find(plate);

    if (it != ActiveSession.end())
    {
        ParkingSession s = it->second;

        cout << "Car is Currently Parcking\n";
        cout << "Plate      : " << s.Plate << "\n";
        cout << "Spot       : " << s.SpotNumber << "\n";
        cout << "Type       : " << s.SpotType << "\n";
        cout << "Entry Time : "
             << FormatTime(s.EntryHour, s.EntryMin) << "\n";

        return;
    }

    // search in history
    auto hist = History.find(plate);

    if (hist != History.end())
    {
        cout << "Car found in History\n";

        for (const auto& r : hist->second)
        {
            cout << "Spot      : " << r.SpotNumber << "\n";
            cout << "Entry     : " << r.EntryTime << "\n";
            cout << "Exit      : " << r.ExitTime << "\n";
            cout << "Duration  : " << fixed << setprecision(1)
                 << r.Duration << " hrs\n";
            cout << "Total     : " << r.TotalCost << " EGP\n";
        }

        return;
    }

    // not found
    cout << "Car not found in system.\n";
}


void findCar(std::string plate)
{

    // active sessions
    auto it = ActiveSession.find(plate);
    if (it != ActiveSession.end())
    {
        const ParkingSession &s = it->second;
        cout << "Status     : ACTIVE (Currently Parked)\n";
        cout << "Plate      : " << s.Plate << "\n";
        cout << "Spot       : " << s.SpotNumber << "\n";
        cout << "Type       : " << s.SpotType << "\n";
        cout << "Entry Time : " << FormatTime(s.EntryHour, s.EntryMin) << "\n";
        return;
    }

    // history
    auto hit = History.find(plate);
    if (hit != History.end() && !hit->second.empty())
    {
        cout << "Status     : HISTORY (Not currently parked)\n";
        cout << "Plate      : " << plate << "\n";
        cout << "Visits     : " << hit->second.size() << "\n";
        cout << "Use showCarhistory(plate) to see details.\n";
        return;
    }

    cout << "Car not found.\n";
}

void showCurrenyCars() // avtive
{

    
    if (ActiveSession.empty())
    {
        cout << "No cars currently parked.\n";
        return;
    }

    cout << left
         << setw(12) << "Plate"
         << setw(8)  << "Spot"
         << setw(12) << "Type"
         << setw(8)  << "Entry"
         << "\n";

    cout << string(40, '-') << "\n";

    for (const auto &it : ActiveSession)
    {
        const ParkingSession &s = it.second;
        cout << left
             << setw(12) << s.Plate
             << setw(8)  << s.SpotNumber
             << setw(12) << s.SpotType
             << setw(8)  << FormatTime(s.EntryHour, s.EntryMin)
             << "\n";
    }
}

void showCarhistory(std::string plate) //
{

    auto hit = History.find(plate);
    if (hit == History.end() || hit->second.empty())
    {
        cout << "No history found for plate: " << plate << "\n";
        return;
    }

    const vector<Receipt> &receipts = hit->second;

    cout << "Plate  : " << plate << "\n";
    cout << "Visits : " << receipts.size() << "\n";

    cout << left
         << setw(8)  << "#"
         << setw(8)  << "Spot"
         << setw(8)  << "Entry"
         << setw(8)  << "Exit"
         << setw(10) << "Hours"
         << setw(10) << "Cost"
         << "\n";

    cout << string(52, '-') << "\n";

    int idx = 1;
    for (const auto &r : receipts)
    {
        cout << left
             << setw(8)  << idx++
             << setw(8)  << r.SpotNumber
             << setw(8)  << r.EntryTime
             << setw(8)  << r.ExitTime
             << setw(10) << fixed << setprecision(1) << r.Duration
             << setw(10) << fixed << setprecision(1) << r.TotalCost
             << "\n";
    }
}

void showDailyPeport()
{

    int freeCount = 0;
    for (const auto &p : Spots)
        if (p.second) freeCount++;

    int activeCount = (int)ActiveSession.size();

    int totalReceipts = 0;
    for (const auto &h : History)
        totalReceipts += (int)h.second.size();

    cout << "Total Spots     : " << TOTAL_SPOTS << "\n";
    cout << "Free Spots      : " << freeCount << "\n";
    cout << "Occupied Spots  : " << (TOTAL_SPOTS - freeCount) << "\n";
    cout << "Active Cars     : " << activeCount << "\n";
    cout << "Total Visits    : " << totalReceipts << "\n";
    cout << "Total Revenue   : " << fixed << setprecision(1) << TotalRevenue << " EGP\n";

    
    
    if (HourlyTraffic.empty())
    {
        cout << "No traffic data.\n";
        return;
    }

    // print 0..23 even if missing
    for (int h = 0; h < 24; h++)
    {
        int cnt = 0;
        auto it = HourlyTraffic.find(h);
        if (it != HourlyTraffic.end()) cnt = it->second;
        cout << "Hour " << setw(2) << setfill('0') << h << setfill(' ')
             << " : " << cnt << "\n";
    }
}


int main()
{
    cout << boolalpha;
    InitSpots();

    
    cout << "Enter A111: "
         << EnterParking("A111", 10, 30, "REGULAR") << "\n";

    FindCar("A111");
    cout << "\nExit A111:\n";
    bool result = ExitParcking("A111", 13, 0);
    FindCar("A111");

    // DisplayAllSpots();

    return 0;
}