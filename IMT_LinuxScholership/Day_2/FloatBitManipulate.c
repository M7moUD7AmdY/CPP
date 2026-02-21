#include <stdio.h>


//way 1 union


typedef union{
float f;
char arr[4];
int i;
}fb_t;

union {
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign     : 1;
    } parts;
} fb;


int main()
{
  
        fb.f = 3.14f;

    printf("Float value: %f\n", fb.f);
    printf("Sign: %u\n", fb.parts.sign);
    printf("Exponent: %u\n", fb.parts.exponent);
    printf("Mantissa: %u\n", fb.parts.mantissa);    

    return 0;
}