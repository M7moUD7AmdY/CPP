#include <stdio.h>

union {
char arr[3];
struct{
char x,y,z;

}data;


}u_t;


int main()
{
    u_t.data.x=0;
    u_t.data.y=1;
    u_t.data.z=2;

    for(int i=0;i<3;i++)
    {
        printf("%d",u_t.arr[i]);
    }

   

    return 0;
}