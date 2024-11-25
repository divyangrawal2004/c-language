#include <stdio.h>

main()
{
    int size, i, j;
    printf("enter array size:");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf(" enter elements:- ");
        scanf("%d", &array[i]);
    }
    int null;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
                
            {
                array[j] = NULL;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}