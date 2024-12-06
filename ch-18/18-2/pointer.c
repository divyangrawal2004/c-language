#include<stdio.h>
void main()
{
    int n=20;
    int *ptr;

    ptr = &n;

    printf("number \t : %u \n",&n);
    printf("ptr \t : %x \n",&ptr);

    n =59;
    printf("number \t : %u \n",&n);
    printf("ptr \t : %d \n", *ptr);

    *ptr = 120;
    printf("number \t : %d \n", n);
    printf("ptr \t : %d \n", *ptr);
}