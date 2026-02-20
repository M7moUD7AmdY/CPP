#include <iostream>
#include <string>
#include <fstream>

using namespace std ;


int main(void){

    ofstream outfile("data.txt");

    // if(outfile.is_open())
    // {
    //     cerr<< "File not open"<<endl;
    //     return 1;
    // }
    outfile<<"Mahmoud Hamdi"<<endl;

    outfile.close();
    
  




return 0;

}