#include <stdio.h>
#include <string.h>
// #include<conio.h>

main()
{
    char email[] = "admin@gmail.com";
    char password[] = {123456};

    char mail[30];
    char pass[30];

    printf("enter your email :-");
    scanf("%s", &mail);

    fflush(stdin);

    printf("enter your pasword:-");
    scanf("%s", &pass);

    if ((email, mail) == 0 && (password, pass) == 0)
    {
        printf("login succesfull.....");
    }
    else
    {
        printf("invalid email & password...");
    }
}