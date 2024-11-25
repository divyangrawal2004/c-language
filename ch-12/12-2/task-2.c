#include<stdio.h>

main()
{
    int size1,size2;
    printf("enter any size for rows:-");
    scanf("%d",&size1);

    printf("enter any size for colums:-");
    scanf("%d",&size2);

    int a[size1][size2];

     for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
             printf("enter for elements:-");
             scanf("%d",&a[i][j]);
        }
      
    }
    printf("\n\n2D array is:-\n");
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}