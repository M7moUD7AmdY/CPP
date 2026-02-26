#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;
// try wit 12+4/3*3.13  chang to RPN.
void Calc(string line) {
   
    stack<int> st;
    string val;
    int n1,n2,Res;

       stringstream ss(line);
       while( getline(ss,val,' '))
       {

         if ((val == "+") || (val == "-") || (val == "*") || (val == "/"))
        {
            if(st.size() <2){cout <<"Err no enough nums"<<endl;}

            n1=st.top();
            st.pop();
            n2=st.top();
            st.pop();
            if (val == "+")
            {
                Res = n2 + n1;
                cout<< "RES : "<<Res<<endl;
            }
            else if (val == "-")
            {
                Res = n2 - n1;
                cout<< "RES : "<<Res<<endl;
            }
            else if (val == "*")
            {
                Res = n2 * n1;
                cout<< "RES : "<<Res<<endl;
            }
            else if (val == "/")
            {
                Res = n2 / n1;
                cout<< "RES : "<<Res<<endl;
                
            }

        }
        else
        {
            st.push(stoi(val));
        }
        
    }
         
    }

int main(){
    string line,n1,n2,op,RPN;

    while(getline(cin,line))
    {
        int pos= line.find_first_of("-+/*");
        n1=line.substr(0,pos);
        n2=line.substr(pos+1);
        op=line[pos];

        RPN=n1+' '+n2+' '+op;
        cout<<"RPN : "<<RPN<<endl;
        Calc(RPN);
        
    }

    return 0;
}

