#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>


using namespace std;


int main()
{
    vector<string> v;
    string line,token;
    getline(cin,line);
    stringstream ss(line);

   while( getline(ss,token,' '))
   {
    
     v.push_back(token);
   }
   reverse(v.begin(),v.end());

   for(string str:v)
   {
    cout<<str<<" ";

   }

    
    return 0;
}