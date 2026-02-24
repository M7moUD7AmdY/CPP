#include <iostream>
#include <string>
#include <vector>

using namespace std ;

template <typename T >
T add(T a, T b)
{
return a+b;
}

template<typename T,int scale>
T scaler(T a)
{
    return a * scale;
}
int main(void){

   
    
cout<<add(1,2)<<endl;
cout<<add(1.1,2.2)<<endl;
cout<<scaler<int,5>(5)<<endl;




return 0;

}