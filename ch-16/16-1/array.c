#include<stdio.h>

void loop(int start, int end)
{
    if(start <= end)
    {
        printf("%d\n",start);

        start++;
        loop(start , end);
    }
}

void main()
{
    int s,e;
    printf("enter start and end value:");
}