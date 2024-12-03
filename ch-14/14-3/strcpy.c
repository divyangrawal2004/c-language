#include<stdio.h>
#include<string.h>

main()
{
    char name[20];
    char copy[20];
    printf("enter any name:-");
    scanf("%[^\n]",&name);

    strcpy(copy,name);
    printf("copy name :- %s",copy);
}