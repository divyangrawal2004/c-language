#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("enter a value:");
 scanf("%d",&a);
 printf("enter b value:");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("swapping a is :%d\n",a);
 printf("swapping b is :%d\n",b);
 getch();

}

