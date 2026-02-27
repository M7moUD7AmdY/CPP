#include <iostream>
#include <variant>
using namespace std;

int main()
{
    variant<string,int> var;

    var = "Mahmoud";

    visit([](auto&& v){ cout << v << endl; }, var);

    var = 27;

    visit([](auto&& v){ cout << v << endl; }, var);

    return 0;
}