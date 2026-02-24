#include <iostream>
#include <stack>
using namespace std;

void str_rev(string str)
{
    stack<char> st;

    for(char value : str)
    {
        st.push(value);
    }

    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }

   
}

int main()
{
    str_rev("Mahmoud");
}