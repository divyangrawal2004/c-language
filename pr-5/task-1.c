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
        printf("enter element [%d]:", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nNegative elements from an Array:");

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("%d,", a[i]);
        }
       
    }
}