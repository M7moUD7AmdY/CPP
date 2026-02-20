
typedef enum{
    CHAR,
    FLOAT,
    INT,
    STRING

}type;

typedef struct{
    type Type;
    union{
        int i;
        char c;
        float f;
        char s[10];
    }data;
}value;



int main()
{
    value arr[2];
    arr[0].Type=CHAR;
    arr[0].data.c=1;
    


    return 0;
}