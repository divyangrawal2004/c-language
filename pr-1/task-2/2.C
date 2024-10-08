#include<stdio.h>
#include<conio.h>
main()
{
  float b,h,d,t,gs;
  clrscr();
  printf("Enter base salary:");
  scanf("%f",&b);
  printf("Enter hra value:");
  scanf("%f",&h);
  printf("Enter da value:");
  scanf(" %f",&d);
  printf("Enter ta value:");
  scanf(" %f",&t);

  h=b*(10.00/100.00);
  d=b*(5.00/100.00);
  t=b*(8.00/100.00);

  gs=b+h+d+t;
  printf("gross salary is: %.2f",gs);
  getch();


}

