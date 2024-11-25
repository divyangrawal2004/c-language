#include <stdio.h>
main()
{

    int size;
    printf("enter any size:");
    scanf("%d", &size);

    printf("\n\n");
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter A's element [%d]:- ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\n");
    int b[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter B's element [%d]:- ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\n\n output is:- \n\n");

    int sum = 0;
    printf("\n\n Array C is :-");

    for (int i = 0; i < size; i++)
    {
        sum = a[i] + b[i];
        printf(" %d  ",sum);
    }

}