#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1,n2;
    char op;
    while(1)
    {
    cout << "Enter ur op:" << endl;
    cin  >> op;
    cout <<"Enter first num :" << endl;
    cin  >> n1;
    cout <<"Enter sec num :" << endl;
    cin  >> n2;
    switch(op)
    {
        case '+' :
        cout <<n1<<"+"<<n2<<"="<< n1+n2 << endl;
        break;
        case '*' :
        cout <<n1<<"*"<<n2<<"="<< n1*n2 << endl;
        break;
        case '-' :
        cout <<n1<<"-"<<n2<<"="<< n1-n2 << endl;
        break;
        case '/' :
        cout <<n1<<"/"<<n2<<"="<< n1/n2 << endl;
        break;
    }
    }
    return 0;
}
