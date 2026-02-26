#include <iostream>
#include <string>
#include <tuple>

using namespace std ;


int main()
{
    tuple <string,int,float> t={"mahmoud",27,171.4};
    // tuple <string,int,float> t=make_tuple<string,int,int>("mahmoud",27,171);

    // auto name =get<0>(t);
    // auto age =get<int>(t);
    // auto len =get<int>(t);

    // cout<< name <<" "<<age<<" "<< len<<endl;

    auto &[name,age,len]=t;
    cout<< name <<" "<<age<<" "<< len<<endl;

    return 0;
}