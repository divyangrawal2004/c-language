#include <stdio.h>

void main()
{
    int i, j, s;
for (i = 10; i >= 6; i--)
{
    for (s = 1; s <= (10-i); s++)
    {
        printf("  ");
    }
    for (j = i; j >= 6; j--)
    {
        printf("%d ", j);
    }
    printf("\n");
}
}