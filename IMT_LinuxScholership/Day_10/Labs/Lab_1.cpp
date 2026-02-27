#include <iostream>
#include <string>

using namespace std ;
namespace MyAPP
{

    int x=1;

    void print()
    {
        cout<<"MyAPP"<<endl;
    }

    class mydata
    {
        public:
        static void data()
        {
            cout<<"Class"<<endl;
        }

    };


}

namespace MyAPP
{

    //? extend for the first namespase
    
} // namespace name


int main()
{

    MyAPP::x=20;
    MyAPP::print();
    MyAPP::mydata::data();
    
    return 0;
}