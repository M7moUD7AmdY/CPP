#include <iostream>
using namespace std;


class CCounter{

public:
CCounter()=default;
CCounter(int counter):m_counter(counter){}
CCounter(int counter,int step):m_counter(counter),m_step(step){}

 int operator++(int step){
    m_counter+=step;

 }

private:
int m_counter;
int m_step;



};


int main()
{
CCounter c;


    return 0;
}