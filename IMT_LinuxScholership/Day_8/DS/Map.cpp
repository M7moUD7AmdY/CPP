#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std ;


struct person 
{
    string name;
    int age;

    person(string n,int a):name(n),age(a){}

    string ToString()const
    {
        string out;
        stringstream ss(out);
        ss<< this->name <<this->age;
        return out;

    }

};

struct address
{
    private:
    string street;
    string country;
    int block_num;
    public:
    address(string st,string co,int i):street(st),country(co),block_num(i){}
    bool operator <(address& other)const
    {
        return (this->street<other.street && this->country < other.country && this->block_num <other.block_num);
    }
    string ToString()const
    {
        string out;
        stringstream ss(out);
        ss<< this->street <<this->country<<this->block_num;
        return out;

    }

};

map<address,person>google_maps={
{address("lol","122",5),person("mahmoud",27)},
{address("ddd","442",2),person("hamdi",27)},
{address("ee","1112",1),person("rshed",27)}



};

int main()
{
for (auto it=google_maps.begin();it!=google_maps.end();++it)
{
    cout << it->first.ToString() << " " << it->second.ToString() << endl;
}

    
    return 0;
}