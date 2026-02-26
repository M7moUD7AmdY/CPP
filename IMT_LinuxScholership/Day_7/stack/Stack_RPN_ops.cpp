#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;
// try wit 12+4/3*3.13  chang to RPN.
int main() {
   
    stack<int> st;
    string line,val;
    int n1,n2,Res;

    while (cin >> line)
    {
       stringstream ss(line);
        getline(ss,val,' ');

         if ((val == "+") || (val == "-") || (val == "*") || (val == "/"))
        {
            if(st.size() <2){cout <<"Err no enough nums"<<endl; return 0;}

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


    return 0;
}