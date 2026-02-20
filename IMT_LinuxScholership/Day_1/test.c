#include <stdio.h>

typedef union{
int x;
struct{
char arr[4];
}s_t;
}u_t;

int main()
{
    u_t u1;
    u1.x=0x01;

    printf("%d",u1.s_t.arr[0]);
    printf("%d",u1.s_t.arr[1]);
    printf("%d",u1.s_t.arr[2]);
    printf("%d",u1.s_t.arr[3]);



    return 0;
}