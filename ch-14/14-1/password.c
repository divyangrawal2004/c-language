#include <stdio.h>
#include <string.h>
main()
{

    char string[20];
    int uper=0, lower=0, digit=0, symbol = 0;
    
    printf("enter password:-");
    gets(string);

       int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            uper += 1;
        }

        else if (string[i] >= 97 && string[i] <= 122)
        {
            lower += 1;
        }

        else if (string[i] >= 48 && string[i] <= 57)
        {
            digit += 1;
        }
        else if ((string[i] >= 32 && string[i] <= 47) || (string[i] >= 58 && string[i] <= 64) ||
                 (string[i] >= 91 && string[i] <= 96) || (string[i] >= 123 && string[i] <= 126))
        {
            symbol += 1;
        }
    }

    if (uper >= 1 && lower >= 1 && digit >= 1 && symbol >= 1 && length >= 6)
    {
        printf("password is strong...");
    }
    else
    {
        printf("password is not strong....");
    }
}