#include <iostream>
#include <array>
#include <vector>


using namespace std;


int main()
{
    vector<int>v;
    cout<<"Size"<<','<<"Capacity"<<endl;
    for(int i=0;i<=100;i++)
    {
        v.push_back(i);
        cout<<v.size()<<','<<v.capacity()<<endl;

    }

return 0;
}