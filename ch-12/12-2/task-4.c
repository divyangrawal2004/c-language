#include<stdio.h>
main()
{
    int size1,size2;

    printf("enter array rows:-");
    scanf("%d",&size1);

    printf("enter colums:-");
    scanf("%d",&size2);

    int a[size1][size2],b[size1][size2],sum[size1][size2];

    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            printf("enter elements [%d][%d]:-",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

     for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            printf("enter elements [%d][%d]:-",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

     for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


     for(int i=0;i<size1;i++)
    
        for(int j=0;j<size2;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

        printf("sum is:-\n\n");

     for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)

        {
             printf("%d ",sum[i][j]);
        }
          printf("\n");
    }

      

}
    
   

