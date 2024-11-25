#include <stdio.h>
main()
{
    int size;
    printf("enter array size:-");
    scanf("%d", &size);

    printf("\n\n");
    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter element [%d]:-", i + 1);
        scanf("%d", &a[i]);
    }

    for ( int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    printf("swapping is :  ");

    for (int i = 0; i < size; i++)
    {
        printf("%d  ", a[i]);
    }
}