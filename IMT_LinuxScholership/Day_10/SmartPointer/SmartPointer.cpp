#include<iostream>
#include <memory>
#include <utility>


using namespace std;


int main()
{
    int x=1;
    
    unique_ptr<int>un_intptr=make_unique<int>(x);

    cout<<*un_intptr<<endl;
    cout<<un_intptr.get()<<endl;




    return 0;
}