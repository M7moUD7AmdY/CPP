#include <stdio.h>

void sliding_avg_two_pointer(int *arr,int winsize,int ArrElemNum)
{
   
    if(winsize <= 0 || winsize > ArrElemNum)
    {
        printf("Invaled Function Input");
        return ;

    }

    //[1,2,3,4,5]
    //win 1-> [1,2,3]
    //win 2->[2,3,4]
    //win 3->[3,4,5]
    
    int sum=0,i=0,win=0,rightptr=0;
    while(i<ArrElemNum)
    {
        win++;
        sum=0;

        i=rightptr;
        printf("\ni=%d\n",i);
        for(i=rightptr;i<(rightptr+winsize);i++)
        {
        sum+=arr[i];
        }
        rightptr++;


        printf("Avrege of win %d: %d\n",win,(sum/winsize));
    }
    


}




int main()
{
    int arr[9]={1,2,3,4,5,6};
     int ArrElemNum=(int)sizeof(arr)/sizeof(arr[0]);
    sliding_avg_two_pointer(arr,3,ArrElemNum);



   


    return 0;
}