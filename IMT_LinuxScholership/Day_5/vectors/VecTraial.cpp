#include <iostream>
#include <vector>

using namespace std ;


int main()
{


    //init
    vector<int>v1;
    vector<int>v2(5);// reserve 5 places wit h init val =0;
    vector<int>v3(5,10);//reserve 5 places with init val =10
    vector<int>v4={1,2,3,4};//reseve 4 plases with its vals
    vector<int>v5(v2);//copy from v2
    //storage
    cout<<v2.size()<<" "<<v2.capacity()<<endl;
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);

    cout<<v2.size()<<" "<<v2.capacity()<<endl;

    cout<<v2.empty()<<endl;
    // v2.clear();
    cout<<v2.size()<<" "<<v2.capacity()<<endl;
    cout<<v2.empty()<<endl;
    v2.reserve(10);
    cout<<v2.size()<<" "<<v2.capacity()<<endl;

    cout<<endl;
    v2.erase(v2.begin()+6,v2.end());

    for(auto it=v2.begin();it!=v2.end();++it)
    {
        cout<< *it <<endl;
      
    }


    
    return 0;
}