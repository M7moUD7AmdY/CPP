#include <iostream>
#include <string>

using namespace std ;


int main(void){

string input;
std::getline(cin,input,'+');  
int a = stoi(input);
std::getline(cin,input);
int b = stoi(input);

cout << "sum=" << (a+b) << endl;




return 0;

}