#include <iostream>
using namespace std;


class CCounter{

public:
CCounter()=default;
CCounter(int counter):m_counter(counter){}
CCounter(int counter,int step):m_counter(counter),m_step(step){}

 int operator++(int){
    m_counter+=1;

 }

 void print()
 {
    cout<<this->m_counter<<endl;
 }

private:
int m_counter;
int m_step;



};


int main()
{
CCounter c(5);
c++;
c.print();


    return 0;
}