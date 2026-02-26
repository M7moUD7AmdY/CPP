#include <iostream>
#include <queue>
using namespace std;

void bin_num(int n)
{
    queue<int> qu;
    int bits = sizeof(n) * 8;   
    for(int i = bits - 1; i >= 0; i--)
    {
        qu.push((n >> i) & 1);
    }

    // Print and pop
    while(!qu.empty())
    {
        cout << qu.front();
        qu.pop();
    }

    cout << endl;
}

int main()
{
    bin_num(10);
    bin_num(5);
    bin_num(0);
}