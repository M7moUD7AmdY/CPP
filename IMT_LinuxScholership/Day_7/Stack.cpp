#include<iostream>
#include<stack>

using namespace std;


int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    while(!st.empty())
    {
        auto ttop=st.top();
        cout<<ttop<<endl;
        st.pop();

    }

    printf("%d",')');



    return  0;
}