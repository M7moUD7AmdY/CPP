#include<iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int a,b,result;
    char op;

    std::string input;
// //   std::cin>>a>>op>>b;
//     std::getline(cin, input, '+');
//     a=stoi(input);
//     std::getline(cin, input, '+');
//     b=stoi(input);
//     cout<<a+b<<endl;

// while(std::getline(cin,input))
// {
//     int op_pos= input.find_first_of("+-/*");
//     a=stoi(input.substr(0,op_pos));
//     b=stoi(input.substr(op_pos+1));
//     op=input[op_pos];

//     switch (op)
//     {
//     case '+':
//         result = a + b;
//         break;
//     case '-':
//         result = a - b;
//         break;
//     case '*':
//         result = a * b;
//         break;
//     case '/':
//         result = a / b;
//         break;
//     default:
//         std::cerr << "Undifined Operation" << std::endl;
//         break;
//     }

//    cout<<input<<" = "<<result<<endl;

std::getline(cin,input);
stringstream ss(input);
 
ss>>a>>op>>b;
cout<<input<<endl;

cout<<a<<b<<endl;

    


    return 0;
}