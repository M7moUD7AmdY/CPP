#include <iostream>
#include <string>

using namespace std ;


void swap(int &a, int &b)   
{
    int temp = a;
    a = b;
    b = temp;
}


int main(void){

    int x = 5, y = 10;
    swap(x, y);
    cout << x << " " << y;  

return 0;

}