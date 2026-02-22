#include <iostream>
#include <vector>

using namespace std;
/*
for (int val : arr)
{
}

like py for i in list
*/

int main()
{
    vector<int> v;
    cout<<v.empty()<<endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //v.at(6) -->> exception not valid place

    cout<<v.empty()<<endl;


    return 0;
}