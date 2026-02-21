#include <iostream>
#include <cstring>
#include <string.h>
#include <string>


using namespace std;
int main()
{
    string s ={"Mahmoud"};
    std::string str2 ="hamdi";
    string str3("rashed");
    string str4(5,'a');
    string str5={'a','b'};
    // s.reserve(100);
    // s.resize(10);
    // cout <<s.capacity()<<' '<<s.size() <<' '<<s.length()<<' '<<s<<endl;
    // cout <<s.back()<<" "<<s.front()<<" "<<s.at(5)<<" " <<s.data()<<" " <<s.c_str()<<endl;

    s.append("mmm");
    s+="a";
    s.insert(5,"1");
    cout<<s<<endl;


    // cout << string::npos <<endl;
    // size_t pos=s.find("zz");
    // if(pos != string::npos)
    // {
    //     cout<<"Found"<<endl;

    // }
    // else
    // {
    //     cout<<"NOT found"<<endl;
    // }

    size_t pos2 =s.find_first_of("mmzm");
    if(pos2 != string::npos) {cout<<"OK";}

    else cout<<"NOK";









    return 0;
}