#include <stdio.h>
main()
{
    int size1, size2;

    printf("enter array rows:-");
    scanf("%d", &size1);

    printf("enter colums:-");
    scanf("%d", &size2);

    int a[size1][size2], b[size1][size2];

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("enter elements [%d][%d]:- ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int large = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i][j] > large)
            {
                large = a[i][j];
            }
        }
    }
    printf("\n\nThe largest element is: %d", large);
}