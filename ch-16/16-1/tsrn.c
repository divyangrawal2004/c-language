#include<stdio.h>

void sum(int a ,int b, char ch);

void main()
{
    int x,y;

    printf("enter first number:-");
    scanf("%d",&x);
    printf("enter second number:-");
    scanf("%d",&y);

    sum(x,y,'D');
}

void sum(int a ,int b,char ch)
{
    printf("%d + %d = %d\n\n",a,b,a+b);
    printf("character is = %c",ch);
}