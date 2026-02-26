#include <iostream>
#include <vector>
#include <any>
#include <string>

using namespace std;

int main()
{
    vector<any> v;

    // push different data types
    v.push_back(10);               // int
    v.push_back(3.14);             // double
    v.push_back(string("Mahmoud")); // string
    v.push_back('A');              // char

    for (const auto& item : v)
    {
        if (item.type() == typeid(int))
            cout << any_cast<int>(item) << endl;

        else if (item.type() == typeid(double))
            cout << any_cast<double>(item) << endl;

        else if (item.type() == typeid(string))
            cout << any_cast<string>(item) << endl;

        else if (item.type() == typeid(char))
            cout << any_cast<char>(item) << endl;
    }

    return 0;
}