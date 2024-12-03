#include <stdio.h>
#include <string.h>
main()
{
    char name[20];
    char copy[20];
    int index;

    printf("enter any string :-");
    scanf("%[^\n]", &name);

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            index = i;
        }
    }

    strlwr(name);
    strcpy(copy, name);
    strrev(copy);

    if (strcmp(name, copy))
    {
        // name[index] -= 32;
        printf("%s is not palindrom", name);
    }
    else
    {
        // name[index] -= 32;
        printf("%s is palindrome", name);
    }
}