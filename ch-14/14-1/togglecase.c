#include <stdio.h>

main()
{
    char name[20];
    printf("enter any number:-");
    scanf("%[^\n]", &name);

    printf(" name is :- %s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
        }
        
    }
    
    printf("\n\n string  is :- %s", name);
}
