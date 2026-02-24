#include <iostream>
#include <string>
using namespace std;

int main() {

    string line;

    while (getline(cin, line))
    {
        int pos;
        char op;

        if ((pos = line.find('+')) != string::npos) op = '+';
        else if ((pos = line.find('-')) != string::npos) op = '-';
        else if ((pos = line.find('*')) != string::npos) op = '*';
        else if ((pos = line.find('/')) != string::npos) op = '/';
        else {
            cerr << "Invalid operator  " << line << endl;
            continue;
        }

        int num1 = stoi(line.substr(0, pos));
        int num2 = stoi(line.substr(pos + 1));

        int result;

        if (op == '+') result = num1 + num2;
        else if (op == '-') result = num1 - num2;
        else if (op == '*') result = num1 * num2;
        else if (op == '/') {
            if (num2 == 0) {
                cerr << "Error ->Division by zero" << endl;
                continue;
            }
            result = num1 / num2;
        }

        cout << result << endl;
    }

    return 0;
}
