#include<stdio.h>
#include<conio.h>
main()
{
  int x,y;
  clrscr();
  printf("enter x value:-\t");
  scanf("%d",&x);
  printf("enter y value:-\t");
  scanf("%d",&y);
  printf("\n(x+y)3 is:- %d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));
  getch();
}