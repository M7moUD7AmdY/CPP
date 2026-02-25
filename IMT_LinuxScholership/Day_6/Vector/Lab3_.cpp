#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std ;


int main()
{

    vector <int> v;
    ofstream outfile ("out.txt");

    if(!outfile)
    {
    cout << "File open failed\n";
    return 1;
    }

    outfile << "Size , Capacity" <<endl;

    for(int i=0;i<100;i++)
    {
        v.push_back(i);
        outfile << v.size()<<","<<v.capacity() <<endl;

    }
    outfile.close();
    
    return 0;
}