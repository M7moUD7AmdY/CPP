#include <iostream>
#include <stack>
#include <string>

using namespace std;
// try wit 12+4/3*3.13  chang to RPN.
int main() {
    stack<int> st;
    string token;

    while (cin >> token) {

        
        if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')) {

            if (st.size() < 2) {
                cerr << "Error: not enough operands\n";
                return 1;
            }

            int b = st.top(); 
            st.pop();
            int a = st.top();
            st.pop();

            int result = 0;
            switch (token[0]) {
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
                    if (b == 0) {
                        cerr << "Error: division by zero\n";
                        return 1;
                    }
                    result = a / b;
                    break;
            }

            st.push(result);
        } 
        else {
            
            st.push(stoi(token));
        }
    }

    if (st.size() == 1) {
        cout << st.top() << endl;
    } else {
        cerr << "Error: invalid expression\n";
        return 1;
    }

    return 0;
}