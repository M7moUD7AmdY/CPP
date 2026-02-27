#include <iostream>
#include <vector>
#include <any>
#include <string>

using namespace std;

// template<typename T>
// T get_any(any var)
// {
//     if(var.type() == typeid(T))
//     {
//         cout <<"Any Data"<<any_cast<T>(var)<<endl;
//         T re=any_cast<T>(var);
//         return re;

//     }
//             return 0;

// }






int main()
{
    vector<any> v;

    // push different data types
    v.push_back(10);               // int
    v.push_back(3.14);             // double
    v.push_back(string("Mahmoud")); // string
    v.push_back('A');              // char


    // char z=get_any<char>(v.pop_back());

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