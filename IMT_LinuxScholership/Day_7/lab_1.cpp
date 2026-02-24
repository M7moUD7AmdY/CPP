#include<iostream>
#include<string>
#include<sstream>
#include<map>

using namespace std;

int main()
{
    int max=0;
    string str = "mahmoud hamdi mahmoud rashed";
    map<string,int> mp;
    string token;
    stringstream ss(str);
    string most_freq;

    while(ss >> token)
    {
        mp[token]++;   
    }

    for(auto& pair : mp)
    {
        if(pair.second>max)
        {
            max=pair.second;
            most_freq=pair.first;

        }
        cout << pair.first << " : " << pair.second << endl;
    }
cout<<"most frq "<<most_freq<<" with frq: "<<max<<endl;
    
    return 0;
}