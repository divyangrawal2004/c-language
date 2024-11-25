#include <stdio.h>
main()
{
    int rows, cols;

    printf("enter array rows:-");
    scanf("%d", &rows);

    printf("enter colums:-");
    scanf("%d", &cols);

    int a[rows][cols], r, c, sum1 = 0 , sum2 = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter elements [%d][%d]:-", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nenter row number:-");
    scanf("%d", &r);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == r)
            {
                printf("%d ",a[i][j]);
                sum1 += a[i][j];
            }
        }
    }

    printf("sum is rows:- %d\n\n", sum1);

    printf("enter cols number:-");
    scanf("%d",&c);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == c)
            {   
                printf("%d ",a[i][j]);
                sum2 += a[i][j];
            }
        }
    }

    printf("sum is cols:- %d", sum2);
}