#include<iostream>
#include "magic_enum.hpp"
using namespace std ;

enum class eDirections{
    RIGHT,LEFT,UP,DOWN

};

void PrintDir(eDirections dir)
{
    cout<<magic_enum::enum_name(dir)<<endl;
}





int main()
{
    PrintDir(eDirections::RIGHT);
    
    return 0;
}