#include <iostream>
#include <string>
#include <map>
#include <sstream>


using namespace std ;

template<typename T1,typename T2>
struct test
{
    test(){}
    T1 first;
    T2 sec;
};

int main()
{

    test<int,int>obj;
    obj.first=1;
    obj.sec=2;



    
    return 0;
}