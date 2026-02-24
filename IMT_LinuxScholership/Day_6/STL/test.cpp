#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    vector<int> v;
    string line;

    while (getline(cin, line))
    {
        stringstream ss(line);
        string command;
        ss >> command;

        if (command == "create")
        {
            v.clear();
            int value;
            while (ss >> value)
                v.push_back(value);
        }

        else if (command == "insert")
        {
            string token;
            ss >> token;        

            int value, index;
            
            int pos=token.find_first_of('@');
            value=stoi(token.substr(0,pos));
            index=stoi(token.substr(pos+1));

            
            
            // sscanf(token.c_str(), "%d@%d", &value, &index);

            if (index >= 0 && index <= v.size())
                v.insert(v.begin() + index, value);
        }

        else if (command == "erase")
        {
            int index;
            ss >> index;

            if (index >= 0 && index < v.size())
                v.erase(v.begin() + index);
        }

        else if (command == "append")
        {
            int value;
            ss >> value;
            v.push_back(value);
        }

        else if (command == "read")
        {
            int index;
            ss >> index;

            if (index >= 0 && index < v.size())
                cout << v[index] << endl;
        }

        else if (command == "write")
        {
            string token;
            ss >> token;        // example: 5@0

            int value, index;
            sscanf(token.c_str(), "%d@%d", &value, &index);

            if (index >= 0 && index < v.size())
                v[index] = value;
        }
    }

    return 0;
}