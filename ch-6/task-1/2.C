#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();
 printf("enter the first number:");
 scanf("%d",&a);
 printf("enter the second number:");
 scanf("%d",&b);
 if(a>b)
 {
     printf("%d number is maximum:",a);
 }
 else
 {
    printf("%d number is maximum:",b);
 }
 getch();
}