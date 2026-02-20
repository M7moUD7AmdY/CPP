#include <iostream>
using namespace std;

class CCartizianPoint{
public:
    CCartizianPoint(int x,int y):m_x(x),m_y(y){}

    CCartizianPoint operator*(CCartizianPoint other)
    {
        return CCartizianPoint(
            this->m_x * other.m_x,
            this->m_y * other.m_y
        );
    }

    void print()
    {
        cout << "(" << m_x << ", " << m_y << ")" << endl;
    }

private:
    int m_x;
    int m_y;
};

int main()
{
    CCartizianPoint p1(2,3);
    CCartizianPoint p2(4,5);

    CCartizianPoint p3 = p1 * p2;
    p3.print();
}
