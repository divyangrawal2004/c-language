#include <stdio.h>

int cube(int *ptr)
{
    return (*ptr) * (*ptr) * (*ptr);
}

void cubearray(int size1, int size2, int array[size1][size2])

{
    printf("\nCubes of elements :-\n\n");

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("%d ", cube(&array[i][j]));
        }
        printf("\n");
    }
}
int main()
{

    int size1, size2;
    printf("enter array rows:- ");
    scanf("%d", &size1);

    printf("enter array columns:- ");
    scanf("%d", &size2);

    int array[size1][size2];
    // int *ptr = &array[0][0];
    printf("\n");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("enter array elements : a[%d] [%d] :-", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    printf("\n\n Matrix :- \n\n");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {

            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    cubearray(size1, size2, array);
    return 0;
}