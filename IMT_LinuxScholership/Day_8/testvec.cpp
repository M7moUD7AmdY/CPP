#include <iostream>
#include <string>
#include <vector>

using namespace std ;

struct point{

    point(int x,int y,int z):_x(x),_y(y),_z(z)
    {
        cout<<"creat point ("<<_x<<_y<<_z<<")"<<endl;
    }
int _x,_y,_z;
};



int main()
{
vector<point> Points;
Points.push_back(point(1,2,3));
Points.emplace_back(4,5,6);
    
    return 0;
}