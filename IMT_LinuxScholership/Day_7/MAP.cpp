#include<iostream>
#include<string>
#include<map>

//collable obj
#include<functional> 


std::function<void(void)>func;

void sayhi()
{
    std::cout<<"Hi Mahmoud"<<std::endl;
}







using namespace std;
//c++ 20 std Span have a look
int main()
{
    func=sayhi;
    func();

   map<string,int>mp ={{"mahmoud",27}
                        ,{"hamdi",67}};

        mp["mahmoud"]=23;

    cout<<mp["mahmoud"]<<endl;

   for(auto it = mp.begin(); it != mp.end(); ++it)
{
    cout << it->first << " : " << it->second << endl;
}
  
    return 0;
}