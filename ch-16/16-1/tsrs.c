#include<stdio.h>
#include "function.c"
#include<string.h>

void main()
{
    int size;

    printf("enter number of element:-");
    size = inputint();
    
    int a[size];

    arrayinput(size ,a);
}