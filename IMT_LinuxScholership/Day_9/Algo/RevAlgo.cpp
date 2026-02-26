#include <iostream>
#include <string>
#include <vector>
#include <numeric>   // for accumulate
using namespace std;


int main(int argc,char* argv[])
{

    vector <string> vec;
    for(int i=1;i<argc;i++)
    {
        vec.push_back(argv[i]);
    }

   for(auto it=vec.rbegin();it!=vec.rend();++it)
   {
    cout<<*it<<" ";
   }

    
    return 0;
}