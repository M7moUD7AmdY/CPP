#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int findMissing(const vector<int>& v,int n)
{
    int total_sum = n * (n + 1) / 2;   
    int current_sum = 0;

    for(int num : v)
    {
        current_sum += num;
    }

    return total_sum - current_sum;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,13,14,15}; 

    cout << "Missing number: "<< findMissing(nums,15) << endl;

    return 0;
}