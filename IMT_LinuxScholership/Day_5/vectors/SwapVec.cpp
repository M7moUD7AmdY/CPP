#include<iostream>
#include<vector>


using namespace std;

void swapvec(vector<int> &v1, vector<int> &v2)
{
    vector<int> temp(v1);
    v1=v2;
    v2=temp;


}

int main()
{
    vector<int>v1={1,2,3};
    vector<int>v2={4,5,6};

    for(int i=0;i<3;i++)
    {
        cout<<v2[i];

    }
    swapvec(v1,v2);
    cout<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<v2[i];

    }

    return 0;
}