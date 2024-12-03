#include<stdio.h>
main()
{
    char name[10];
    printf("enter any name:-");
    scanf("%[^\n]",&name);

    int len = strlen(name);

    printf(" length is :- %d", len);

}