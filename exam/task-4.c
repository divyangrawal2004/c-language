#include <stdio.h>

main()
{
    int number;
    printf("enter number :-");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("%d is divisible 3 and 5", number);
    }
    else
    {
        printf("%d is not divisible 3 and 5", number);
    }
}