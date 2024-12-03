#include<stdio.h>
main()
{
    char name[20];
    printf("enter any  number:-");
    scanf("%[^\n]",&name);

    strrev(name);
    printf("reverse is :- %s",name);
}