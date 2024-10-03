#include<stdio.h>
#include<conio.h>
main()
{
  int a,b;
  clrscr();
  printf("enter a value:");
  scanf("%d",&a);
  printf("enter b value:");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("swapping a is :%d\n",a);
  printf("swapping b is :%d",b);
  getch();

}