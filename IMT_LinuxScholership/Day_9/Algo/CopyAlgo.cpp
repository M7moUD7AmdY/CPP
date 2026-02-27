#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void func(string x)
{
cout<<x<<endl;
}

string func2( string& str)
{
    return str + " Func add";
}

int main()
{
    vector<string> x;
    vector<string> y;
    vector<string> z;
    vector<string> n;

    vector<string> v = {"name", "age", "Len"};
    x.resize(v.size());


    copy(v.begin(),v.end(),x.begin());//shall have resize
    
    copy_if(v.begin(),v.end(),back_inserter(y),[](const string &s){return s.length()>3;});

    copy_n(v.begin(),2,back_inserter(z));

    n.resize(v.size());

    transform(v.begin(),v.end(),n.begin(),func2);


    for_each(n.begin(),n.end(),func);
       cout<<string(50,'-')<<endl;


    for(string str:x)
    {
        cout<< str <<endl;

    }

    cout<<string(50,'-')<<endl;

   for_each(y.begin(),y.end(),func);

    cout<<string(50,'-')<<endl;
    for(string str:z)
    {
        cout<< str <<endl;

    }


    
    return 0;
}