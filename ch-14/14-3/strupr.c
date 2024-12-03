#include<stdio.h>
main()
{
    char name[20];

    printf("enter any name:- ");
    scanf("%[^\n]",&name);

    strupr(name);

    printf("upper is :- %s\n",name);

}
