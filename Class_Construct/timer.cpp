#include <iostream>
#include <string>

using namespace std ;

class Timer{
    private:
        int counter;
        
    public:
    Timer(int time_sec){
        counter=time_sec;
    }
    Timer(string time_sec){
        counter=stoi(time_sec);


    }
    Timer(int min,int sec){
        counter=min*60+sec;
    }


    void count_down()
    {
        while(counter >0)
        {
        cout<< "Timer: " << counter << " Second"<< endl;
        counter-=1;
        }
    }






};



int main (){
    Timer t1("10");
    t1.count_down();

    cout <<"********************" <<endl;

    Timer t2(10);
    t2.count_down();

    cout <<"*******************" <<endl;

    Timer t3 (0,10);
    t3.count_down();





   return 0; 
}