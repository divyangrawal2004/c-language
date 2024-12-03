#include<stdio.h>
#include<string.h>
main()
{

    char name[20];
    printf("enter any name:-");
    scanf("%[^\n]",&name);

    strlwr(name);

    printf("lower is :- %s",name);
}