#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile("Input.txt", ios::binary);
    if (!inFile)
    {
        cerr << "Failed to open input file\n";
        return 1;
    }

    ofstream outFile("Output.txt", ios::binary);
    if (!outFile)
    {
        cerr << "Failed to open output file\n";
        return 1;
    }

    inFile.seekg(0, ios::end);
    long long fileSize = inFile.tellg();

    string line = "";

    for (long long i = fileSize - 1; i >= 0; i--)
    {
        inFile.seekg(i);

        char ch;
        inFile.get(ch);

        if (ch == '\n')
        {
            if (!line.empty())
            {
                outFile << line << '\n';
                line.clear();
            }
        }
        else if (ch != '\r')  
        {
            line = ch + line;
        }
    }

    
    if (!line.empty())
    {
        outFile << line << '\n';
    }

    inFile.close();
    outFile.close();

    cout << "File reversed successfully into output.txt\n";
    return 0;
}