#include<iostream>
#include<queue>

using namespace std;
//c++ 20 std Span have a look
int main()
{
    queue<int> qu;
    int sum=0;

    int arr[9] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 9; i++)   
    {
        qu.push(arr[i]);

        if(qu.size() == 3)
        {
            sum+= qu.front(); 
            qu.pop();
            sum+= qu.front(); 
            qu.pop();
            sum+= qu.front();
            qu.pop();

            cout << "Avg : " << sum/ 3.0 << endl;
            sum=0;
        }
    }

    return 0;
}