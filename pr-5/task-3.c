#include<stdio.h>
main()
{
    int rows,cols;

    printf("enter array rows:-");
    scanf("%d",&rows);

    printf("enter colums:-");
    scanf("%d",&cols);

    int array[rows][cols];
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("enter elements [%d][%d]:-",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    printf("transpose is :- \n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }
    printf("\n\n");


    
   
}