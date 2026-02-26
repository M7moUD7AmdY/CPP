#include <iostream>
#include <array>
#include <queue>

using namespace std;


int GetAvg(queue<int>&Q){
    int avg=0;

    while(!Q.empty())
    {
        avg+=Q.front();
        Q.pop();

    }

    return (avg/3);

}
int main()
{
    array<int,10>arr={1,2,3,4,5,6,7,8,9,10};
    queue<int>q;
    for(int i:arr)
    {
        q.push(i);
        if(q.size()==3)
        {
            cout<<"AVG : "<<GetAvg(q)<<endl;

        }

    }

    return 0;
}