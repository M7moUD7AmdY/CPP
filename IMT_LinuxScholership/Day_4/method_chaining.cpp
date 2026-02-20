#include <iostream>
#include <string>

using namespace std ;

class Ccounter
{
    private:

    int m_counter;
    int m_step;

    public:

    int step()
    {
        return m_step;

    }

    Ccounter& step(int s)
    {
        m_counter+=s;
        return (*this);

    }

    int counter()
    {
        return m_counter;

    }

    Ccounter& counter(int c)
    {
        m_counter=c;
        return (*this);

    }


}counter;



int main(void){
Ccounter c1;

cout << c1.counter(0).step(2).step(1).counter() << endl;
 
return 0;

}