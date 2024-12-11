#include <stdio.h>
void main()
{

    FILE *fp;
    fp = fopen("C:\\Users\\DIVYANG RAWAL\\Desktop\\user.txt", "a");

    int n;
    printf("enter store data value:-");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (fp != '\0')
        {
            char email[20];
            char psw[20];

            printf("enter your email:-");
            scanf("%s", &email);

            printf("enter your password:-");
            scanf("%s", &psw);
            printf("\n\n");

            fprintf(fp, "Email \t :- %s\n", email);
            fprintf(fp, "Password :- %s\n", psw);
  
        }      
        else
        {
            printf("file is not open...");
        }
        
    }
}