#include <stdio.h>
main()
{
    int size1, size2;
    printf("enter array row:-");
    scanf("%d", &size1);

    printf("enter array colums:-");
    scanf("%d", &size2);

    int a[size1][size2];

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("enter elements [%d] [%d]:-", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n\n");
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Anti-Diagonal element :-  ");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (i+j == size1-1)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
}