#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    vector<int> vec;
    ifstream infile("Input.txt");

    if(!infile.is_open())
    {
        cout <<"Faild to open File"<<endl;

    }

    string line;
    string command;
    string num,pos;
    while(getline(infile,line))
    {
        stringstream ss(line);
        getline(ss,command,' ');

        if(command =="create")
        {
            
           while(getline(ss,num,' '))
           {
            vec.push_back(stoi(num));
           }
            
        }
        else if(command =="insert")
        {

            getline(ss,num,'@');
            getline(ss,pos);
            vec.insert(vec.begin()+stoi(pos),stoi(num));

        }
        else if(command =="append")
        {
            getline(ss,num);
            vec.push_back(stoi(num));

        }
        else if(command == "read")
        {
            getline(ss,pos);
            cout<<vec[stoi(pos)]<<endl;

        }
        else if(command == "write")
        {
            getline(ss,num,'@');
            getline(ss,pos);
            vec.at(stoi(pos))=stoi(num);

        }
        else if(command =="erase")
        {
            getline(ss,pos);
            vec.erase(vec.begin()+stoi(pos));

        }
       
    }

    for(int val:vec)
    {
        cout<<val<<" ";

    }


    return 0;
}