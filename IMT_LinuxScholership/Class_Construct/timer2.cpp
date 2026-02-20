#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <iomanip>
using namespace std ;


class Timer{
private:
int hour;
int min;
int sec;
int time;
public:
Timer(int h,int m,int s):hour(h),min(m),sec(s){}
Timer(int m,int s):min(m),sec(s){
    hour=0;
}
Timer(string timeStr)
{
    string shour, smin, ssec;
    int flag = 0;
    int i = 0;

    while (i < timeStr.length())
    {
        if (timeStr[i] == ':')
        {
            flag++;
        }
        else
        {
            switch (flag)
            {
                case 0: shour += timeStr[i]; break;
                case 1: smin  += timeStr[i]; break;
                case 2: ssec  += timeStr[i]; break;
            }
        }
        i++;
    }

    hour = stoi(shour);
    min  = stoi(smin);
    sec  = stoi(ssec);

    cout << hour << " " << min << " " << sec << endl;
}


void Run()
{
    cout<<time<<endl;
    do{
        time=hour*60*60+min*60+sec;
        Tick();
        Print_Time();

    }while (time);
}

void Tick()
{
    time -=1;
    int temp=time;
    hour =time/3600;
    time -= hour*3600;
    min=time/60;
    time-=min*60;
    sec=time;
    time=temp;
    this_thread::sleep_for(std::chrono::seconds(1));
}

void Print_Time()
{
cout << setfill('0');
cout << setw(2) << hour << ":"
     << setw(2) << min  << ":"
     << setw(2) << sec  << endl;
}
bool Is_Finish()
{
    if(hour || min || sec)
    {

        return false;
    }
    else
    {
        return true;
    }

}


};


int main()
{
    Timer t1(1,0);
    // t1.Run();
    Timer t2("00:01:10");
    t2.Run();


return 0;
}