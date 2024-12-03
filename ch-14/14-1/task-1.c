#include<stdio.h>
main()
{
    char name[50];
    printf("enter your name:-");
    scanf("%[^\n]",&name);

    printf(" name is :- %s",name);
}