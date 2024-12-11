#include<stdio.h>
#include<string.h>

void main()
{
    int row;
    printf("enter rows");
    scanf("%d",&row);

    // printf("enter cols");
    // scanf("%d",&col);
    int a[row];
    int *ptr[row];

    *ptr = &row;

    int array[row];
    for(int i=0;i<row;i++)
    {
        printf("\n enter  array element [%d]: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\n\n output \n\n");
    for(int i=0;i<row;i++)
    {
        printf(" \n %d \n",array[i]);
    }

    printf("\n\n");
    int sum = 0;
     
     for(int i=0;i<row;i++)
     sum = sum+array[i];

     printf("\n sum is :- %u \n",sum);

}