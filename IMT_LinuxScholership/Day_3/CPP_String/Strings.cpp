#include <iostream>
#include <string>
#include <cstring>
using namespace std ;
string format_str(string str)
{
    int counter=0;
for(int i=str.size()-3;i>0;i--,counter++)
{
    if (counter%3==0 && i!=0)
    {
        str.insert(i , ",");
    } 
}
return str;
}




int main()
{
    

    // string s("Mahmoud");
    // cout << s.length() <<endl;
    // s.resize(10);
    // cout << s.size() <<endl;
    // s.reserve(50);
    // cout << s.capacity() <<endl;

    // //find

    // cout<< s.find('o')<<endl;
    cout<<format_str("12349890873367733324555634567")<<endl;


    return 0;
}