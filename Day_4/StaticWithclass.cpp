#include <iostream>
#include <string>

using namespace std ;

class CSensor{

    public:
    CSensor(int id,int reading):m_sensor_id(id),m_last_Reading(reading){
        count++;
    }
    ~CSensor(){
        count--;

    }

    static int get_NoSensor()
    {
        return count;
    }

    int get_lastValue()
    {      
          return m_last_Reading;
    }
    



    private:
    static int count;
    int m_sensor_id;
    int m_last_Reading;



};

int CSensor  :: count=0;

int main()
{
    CSensor s1(1,10);

    {
        CSensor s2(1,20);
        cout<<"Sensor in scoop: " <<CSensor::get_NoSensor()<<endl;

    }

    cout<<"Last reading out: " <<s1.get_lastValue()<<endl;
    cout<<"Sens out scoop: " <<CSensor::get_NoSensor()<<endl;

    return 0;
}