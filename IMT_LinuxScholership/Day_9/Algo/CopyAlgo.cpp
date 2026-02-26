#include <iostream>
#include <string>
#include <vector>
#include <numeric>   // for accumulate
using namespace std;


int main(int argc,char* argv[])
{
vector<string> copied;
    vector<string> csv_line = {"name", "age", "Len"};

copy(csv_line.begin(),csv_line.end(),copied.begin());

cout<< copied <<endl;

    
    return 0;
}