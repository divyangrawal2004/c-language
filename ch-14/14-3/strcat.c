#include<stdio.h>
#include<string.h>

main()
{
    char name[20];
    char surname[20];
    printf("enter any name:-");
    scanf("%[^\n]",&name);

    fflush(stdin);

    printf("enter any name:-");
    scanf("%[^\n]",&surname);

    strcat(name,surname);

    printf("\n\nmurge is :- %s\n",name);
    printf("\n\nmurge is :- %s",surname);


}
