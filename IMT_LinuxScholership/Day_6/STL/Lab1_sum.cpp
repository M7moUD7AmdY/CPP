#include <iostream>
#include <vector>
#include <string>

using namespace std;

void way_1 (int argc, char* argv[])
{
    vector<int> v;
    int sum = 0;

    // Start from 1 to skip program name
    for(int i = 1; i < argc; i++)
    {
        v.push_back(stoi(argv[i]));
    }

    for(int val : v)
    {
        sum += val;
    }

    cout << "Sum = " << sum << endl;

}


// contain logic error  
 void   way_2(int argc, char* argv[])
 {
    vector<int>v;
    int sum=0;
    int n=stoi(argv[1]);
    int n2=stoi(argv[2]);
    cout<<n<<' '<<argc <<endl;

    for(int i = n; i < n2; i++)
    {
        v.push_back(i);
    }
    for(int val : v)
    {
        sum += val;
    }
    cout << "Sum = " << sum << endl;
 }



int main(int argc, char* argv[])
{
    // way_1(argc,argv);

    way_2(argc,argv);



    return 0;
}