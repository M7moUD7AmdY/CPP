#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

namespace a{

   void print(void)
   {
       cout<<"Mahmoud"<<endl;
   }

}
namespace b{

   void print(void)
   {
       cout<<"Hamdi"<<endl;
   }

}

int x;
int y;

namespace total
{
    namespace cir
    {

        void print(void)
        {
            cout<< "cir area="<<x+y<<endl;
        }
    }

    namespace tri
    {
        void print(void)
        {
            cout<< "tri area="<<x*y<<endl;
        }
    }
    namespace sq
    {
        void print(void)
        {
            cout<< "sq area="<<x/y<<endl;
        }
    }

}

namespace take
{
    void take(void)
    {
        cin>>x;
        cin>>y;
    }
}



int main()
{

   take::take();
   total::cir::print();
   total::sq::print();
   total::tri::print();



}
