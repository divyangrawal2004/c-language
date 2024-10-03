#include<stdio.h>
#include<conio.h>
main()
{
  int b,h,d,t;
  clrscr();
  printf("Enter base salary:");
  scanf("%d",&b);
  printf("Enter hra value:");
  scanf("%d",&h);
  printf("Enter da value:");
  scanf(" %d",&d);
  printf("Enter ta value:");
  scanf(" %d",&t);
  printf("gross salary is: %d",b+h+d+t);

  getch();


}

