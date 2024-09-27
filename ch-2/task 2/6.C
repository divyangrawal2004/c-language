#include<stdio.h>
#include<conio.h>
main()
{
  char ch;
  int n;
  float pi;
  clrscr();
  printf("enter the any character:");
  scanf("%c",&ch);
  printf("\nenter the number:");
  scanf("%d",&n);
  printf("\nenter pi values is:");
  scanf("%f",&pi);

  printf("\n\n");
  printf("character is : %c\n",ch);
  printf("number is : %d\n",n);
  printf("pi values is : %f\n",pi);
  getch();
}