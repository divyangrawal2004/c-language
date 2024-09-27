#include<stdio.h>
#include<conio.h>
main()
{
  const float pi=3.14;
  int r;
  clrscr();
  printf("\n\npi value is : %.2f\n",pi);
  printf("enter radius value :");
  scanf("%d",&r);
  printf("Area of Circle is : %.2f",pi*r*r);

  getch();


}