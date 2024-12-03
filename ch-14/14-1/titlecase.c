#include <stdio.h>

main()
{

    char name[20];
    // int cap = 1;
    printf("enter any string name:-");
    scanf("%[^\n]", &name);

    printf("\n\nname is :-  %s\n\n", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ')
            
        {
            name[i] -= 32;
        }
    }
    name[0] -= 32;

    printf("\n\nname is :-  %s\n\n", name);
}