#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;



template<typename T1 ,typename T2>
T1 m1(T1 a , T2 b)
{
    return (a>b)?a:b;
}

int main()
{
    cout << m1<int>(4,5) <<endl;
    cout << m1<int>(4,'m') <<endl;
    cout << m1<string>("mahmoud","Hamdi") <<endl;
    cout << m1<double>(3.3,3)<<endl;


    return 0;
}

