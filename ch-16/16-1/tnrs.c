#include<stdio.h>


int addition()
{
    int a,b;

    printf("enter a:-");
    scanf("%d",&a);
    printf("enter b:-");
    scanf("%d",&b);

    return a+b;
}
void main()
{
    // int ans = addition ();
    printf("ans \t : %d", addition());
}