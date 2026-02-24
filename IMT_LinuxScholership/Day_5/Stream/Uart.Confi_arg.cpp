#include<iostream>
#include<string>

using namespace std;


int main(int argc,char* argv[])
{
    for(int i=1;i<argc;i++)
    {
        string arg = argv[i];
        int pos=arg.find_first_of('=');
        cout<<arg.substr(0,pos)<<" : "<<arg.substr(pos+1)<<endl;
    }
    

    return 0;
}