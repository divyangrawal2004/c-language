#include<stdio.h>
#include<string.h>
main()
{
    char name[50];
    printf("enter any name:-");
    scanf("%[^\n]",&name);

    puts(name);
}