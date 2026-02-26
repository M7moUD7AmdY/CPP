#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>

using namespace std;

string normalizePath(string path)
{
    vector<string> parts;
    string token;
    stringstream ss(path);

    bool isAbsolute = (!path.empty() && path[0] == '/');

    while (getline(ss, token, '/'))
    {
        if (token.empty() || token == ".")
            continue;                  

        if (token == "..")
        {
            if (!parts.empty())
                parts.pop_back();      
        }
        else
        {
            parts.push_back(token);    
        }
    }

    string result = accumulate(
        parts.begin(),
        parts.end(),
        string(),
        [](const string& acc, const string& next)
        {
            return acc.empty() ? next : acc + "/" + next;
        }
    );

    if (isAbsolute)
        result = "/" + result;

    return result.empty() ? (isAbsolute ? "/" : ".") : result;
}

int main()
{
    cout << normalizePath("//home/etc/../bin/./file") << endl;
    cout << normalizePath("/user//bash/./../x.sh/") << endl;
}