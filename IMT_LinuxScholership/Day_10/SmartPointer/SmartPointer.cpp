#include<iostream>
#include <memory>
#include <utility>


using namespace std;


int main()
{
    int x=1;
    
    unique_ptr<int>uptr=make_unique<int>(x);
    unique_ptr<int>uptr2;
    shared_ptr<int>sptr=make_shared<int>(x);
        shared_ptr<int>sptr2=sptr;


    cout<<sptr.use_count()<<endl;





    cout<<*uptr<<endl;
    cout<<uptr.get()<<endl;
    cout<< string(50,'-')<<endl;

    uptr2=move(uptr);
    // cout<<*uptr<<endl;             //cant accses the ptr after move its dangling now
    // cout<<uptr.get()<<endl;

    // cout<< string(50,'-')<<endl;
    cout<<*uptr2<<endl;
    cout<<uptr2.get()<<endl;



    return 0;
}