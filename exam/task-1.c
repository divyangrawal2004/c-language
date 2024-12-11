#include <stdio.h>
main()
{
    int num, sum, first, last;
    printf("enter number:-");
    scanf("%d", &num);

    last = num % 10;

    first = num / 10;
    if (first >= 10)
    {
        first /= 10;
    }

    sum = first + last;

    printf("sum is:- %d ", sum);
}