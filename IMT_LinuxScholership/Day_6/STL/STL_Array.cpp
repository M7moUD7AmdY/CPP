#include <iostream>
#include <algorithm>
#include <array>


using namespace std;


int main()
{


    std::array<int,5>arr={1,2,3,4,5};
    arr.at(2)=100; //function LV  as its return refrance.

    try {

        arr.at(19);
    }
    catch(exception out_of_range)
    {
        cout << "Out of range "<<endl;
    }

    for(auto it=arr.begin();it !=arr.end() ;++it)
    {
        cout<< *it<<' ';

    }



    return 0;
}