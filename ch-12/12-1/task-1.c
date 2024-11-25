#include<stdio.h>

main()
{
    int num;
    printf("enter array size:");
    scanf("%d",&num);
    
    int a[num];
    printf("\n");

    for (int i=0 ;i<num;i++)
    {
        printf(" enter element %d : ",i+1);
        scanf("%d",&a[i]);   
    } 
    printf("\n\n");
    printf("length is an array :- %d",num);
    
}