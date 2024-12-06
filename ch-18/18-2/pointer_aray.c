#include<stdio.h>
void main()
{
    int a[5] = {20,30,40,50,60};
    int *ptr[5];

    for(int i=0; i<5;i++)
    {
        ptr[i] = &a[i];

    }
    for(int i=0;i<5;i++)
    {
        printf("%d \t",*ptr[i]);
    }


}