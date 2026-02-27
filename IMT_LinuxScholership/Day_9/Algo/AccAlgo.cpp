#include <iostream>
#include <string>
#include <vector>
#include <numeric>   // for accumulate
using namespace std;

string joinfunc(string acc,string next)
{
    if(acc.empty())return next;

    return (acc +','+next);

}


int main()
{
    vector<string>v={"Mr","Mahmoud","Hamdi","Rashed"};

    vector<int> vec={1,2,3,4,5,6};

    int sum=accumulate(vec.begin(),vec.end(),0,[](int a, int b){return a+b;});
    cout<<sum<<endl;

    string out=accumulate(v.begin(),v.end(),string(),joinfunc);
    cout << out << endl;
   
    
    return 0;
}