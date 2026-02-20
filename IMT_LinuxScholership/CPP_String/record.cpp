#include <iostream>
#include <string>
using namespace std;
int record_counter=0;
void parseCSV(string headers, string record)
{
    record_counter+=1;
    cout << "Record: "<<record_counter<<endl;

    while (!headers.empty() && !record.empty())
    {
        int hPos = headers.find(',');
        int rPos = record.find(',');
        // cout<<hPos<<endl;

        string header;
        string value;

        if (hPos == -1)
        {
            header = headers;
            headers = "";
        }
        else
        {
            header = headers.substr(0, hPos);
            headers = headers.substr(hPos + 1);
        }

        if (rPos == -1)
        {
            value = record;
            record = "";
        }
        else
        {
            value = record.substr(0, rPos);
            record = record.substr(rPos + 1);
        }

        cout << header << ": " << value << endl;
    }

    cout << endl;
}

int main()
{
    string headers = "Name,Email,City,Salary";

    parseCSV(headers, "mahmoud,mahmoud@lol.com,zayed,7000");
    parseCSV(headers, "hamdi,hamdi@lol.com, city,8000");
    parseCSV(headers, "Rashed,rashed@lol.com,giza,9000");

    return 0;
}
