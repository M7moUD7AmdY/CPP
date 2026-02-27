#include <iostream>
#include <string>
#include <functional>
using namespace std ;

class cNumChecker
{

    private:
    int m_num;
    bool is_even(int n){return (n%2==0);}
    bool is_odd(int n){return !is_even(n);}
    bool is_prime(int n){return false;}
    public:
    enum {CHECK_EVEN,CHECK_ODD,CHECK_PRIME};
    cNumChecker():m_num(0){}
    cNumChecker(int num):m_num(num){}

   bool operator()(int check,int num){
    switch(check)
    {
        case CHECK_EVEN:return is_even(num);
        case CHECK_ODD :return is_odd(num);
        case CHECK_PRIME:return is_prime(num);


    }
   }
};

int main()
{
    cNumChecker checker;

    cout<< checker(cNumChecker::CHECK_EVEN,5)<<" "<<checker(cNumChecker::CHECK_ODD,1);


    
    return 0;
}