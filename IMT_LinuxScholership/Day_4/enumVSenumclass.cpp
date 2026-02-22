#include <iostream>
#include <string>

using namespace std ;

typedef enum directions{
    RIGHT,LEFT,UP,DOWN

}Direction_t;

enum class eDirs{
RIGHT,LEFT,UP,DOWN

};


void PrintDir(Direction_t dir)
{
 cout<<dir<<endl;
}

void PrintDir_cpp(eDirs dir)
{
 cout<<static_cast<int>(dir)<<endl;
}


enum class eDirection{

};


int main()
{
    PrintDir_cpp(eDirs::RIGHT);
    
    return 0;
}