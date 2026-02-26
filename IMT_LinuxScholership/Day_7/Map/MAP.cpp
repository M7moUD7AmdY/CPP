#include<iostream>
#include<string>
#include<map>

#include<functional> 

using namespace std;

std::function<void(void)>func;

void sayhi()
{
    std::cout<<"Hi Mahmoud"<<std::endl;
}

//c++ 20 std Span have a look

int main()
{
    func=sayhi;
    func();

  map<string,int>m;

    m.insert({"mahmoud",23});
    m.insert({"hamdi",88});
    m.insert({"rashed",99});

    for(auto &elem:m)
    {
        cout<<elem.first<<" : "<<elem.second<<endl;

    }

    m.erase("rashed");
    cout<<endl;
    cout<<string(50,'-')<<endl;;

    for(auto it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<" : "<<it->second<<endl;

    }

    m.emplace("MHR",27);//nothing change if the key exist

    m.insert({"lol",7});
     std::cout<<std::string(50,'-')<<std::endl;

    for(auto &elem:m)
    {
        cout<<elem.first<<" : "<<elem.second<<endl;

    }

    auto it =m.find("MHR");
    int i=m.count("kw");
    // int h=m.contains("kw"); C++20

    cout<<i<<endl;
    cout<<it->first<<endl;
    cout<<m.find("MHR")->second<<endl;






    return 0;
}