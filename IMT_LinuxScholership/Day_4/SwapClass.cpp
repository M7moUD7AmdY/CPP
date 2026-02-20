#include <iostream>
using namespace std;

class Cswap
{
private:
    int a;
    int b;

public:
    Cswap(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }

    Cswap& swap(Cswap& other)
    {
        int tempA = this->a;
        int tempB = this->b;

        this->a = other.a;
        this->b = other.b;

        other.a = tempA;
        other.b = tempB;

        return *this;
    }

    
    Cswap& print()
    {
        cout << "a = " << a << ", b = " << b << endl;
        return *this;
    }

    Cswap& zero()
    {
        a=0;
        b=0;
        return (*this);
    }
};

int main()
{
    Cswap c1(10, 20);
    Cswap c2(100, 200);

    cout << "Before swap"<<endl;
    c1.print();
    c2.print();

    cout << "After swap:"<<endl;

  
   c1.swap(c2).print();

    return 0;
}
