#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    ifstream infile("./VecStream_in.txt ");

    if(!infile.is_open())
    {
        cout <<"Faild to open File"<<endl;

    }

    string line;
    string command;

    while(getline(infile,line))
    {
        stringstream ss(line);
        getline(ss,command,' ');

        if(command =="create")
        {
            
        }
        else if(command =="append")
        {

        }
        else if(command == "read")
        {

        }
        else if(command == "write")
        {

        }
        else if(command =="erase")
        {

        }
       
        






    }








    return 0;
}