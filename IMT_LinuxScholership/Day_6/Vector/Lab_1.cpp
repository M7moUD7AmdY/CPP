#include <iostream>
#include <vector>
#include <sstream>

using namespace std ;

//take equation and calc it
int main(int argc,char* argv[])
{
    vector<string> vec;
    int a,b,res=0;
    char op;

    for(int i=1;i<argc;i++)
    {
        vec.push_back(argv[i]);

    }

    for(auto it=vec.begin();it!=vec.end();++it)
    {
            stringstream ss(*it);
            ss>>a>>op>>b;
           
            

             switch(op)
            {
            case '+':
                res = a + b;
                break;
            case '-':
                res = a - b;
                break;
            case '*':
                res = a * b;
                break;
            case '/':
                res = a / b;
                break;
            default:
                cout << "Invalid operator\n";
                break;
            }

    }
    cout<<"Res: "<<res<<endl;


    




    return 0;
}