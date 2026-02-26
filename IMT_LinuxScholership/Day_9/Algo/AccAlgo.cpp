#include <iostream>
#include <string>
#include <vector>
#include <numeric>   // for accumulate
using namespace std;

string join(string acc, string next)
{
    if (acc.empty())
        return next;          // first element (no comma)
    return acc + "," + next;  // add comma before next
}

int main()
{
    vector<string> csv_line = {"name", "age", "Len"};

    string joined = accumulate(csv_line.begin(), 
                               csv_line.end(), 
                               string(), 
                               join);

    cout << joined << endl;

    return 0;
}