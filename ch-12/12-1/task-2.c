#include<stdio.h>

main()
{
    int size;
    printf("enter array size:");
    scanf("%d",&size);

    int array[size];
    for(int i=0;i<size;i++)
    {
        printf("\n enter  array element [%d]: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\n\n output \n\n");
    for(int i=0;i<size;i++)
    {
        printf(" \n %d \n",array[i]);
    }

    printf("\n\n");
    int sum = 0;
     
     for(int i=0;i<size;i++)
     sum = sum+array[i];

     printf("\n sum is :- %d \n",sum);

     printf("\n average of an array :- %f \n",(float)sum/size);


}