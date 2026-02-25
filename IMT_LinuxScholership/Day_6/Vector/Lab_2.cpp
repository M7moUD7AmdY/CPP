#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto i = arr.rbegin(); i != arr.rend(); i++)
    {
        cout << *i << "  ";
    }

    cout << endl;
    cout << "end : " << &(*arr.end()) << endl;
    cout << "rbegin : " << &(*arr.rbegin()) << endl;
    cout << "begin : " << &(*arr.begin()) << endl;
    cout << "rend : " << &(*arr.rend()) << endl;

    return 0;
}