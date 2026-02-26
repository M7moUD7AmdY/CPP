#include<iostream>
#include<queue>

using namespace std;
//c++ 20 std Span have a look
int main()
{
    queue<int> qu;
        queue<int> qu2;


    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu2.push(1);
    qu2.push(2);
    qu2.push(3);
    qu2.push(4);
    qu2.push(5);
    while(!qu.empty())
    {
        cout<<"Front : "<<qu.front()<<" "<<"Back : "<<qu.back()<<" "<<"Zise"<<" "<<qu.size()<<endl;
        qu.pop();
        qu.swap(qu2);


    }

    
    
    return 0;
}