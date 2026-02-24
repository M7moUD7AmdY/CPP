#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc,char* argv[])
{
    string keb,value,inpath,outpath;

    for(int i=1;i<argc;i++)
    {
        stringstream ss(argv[i]);
        getline(ss,keb,'=');
        getline(ss,value);
        
        


        if(keb =="in")
        {
            inpath=value; 
        }
        else if(keb =="out")
        {
            outpath=value;

        }

    } 
        cout<<inpath<<endl;
        ifstream filein(inpath);
        if(!filein.is_open())
        {
            cout<<"File not open"<<endl;
        }
        ofstream fileout(outpath);

        int a,b;
        char op;
        int result;
        string clc;

        while(getline(filein,clc))
        {
            stringstream ss_line(clc);
            ss_line>>a>>op>>b;
            
        switch (op)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout << "Undifined Opcode" << endl;
            break;
        }

        fileout << result << endl;

        }


   

   
    
    return 0;
}