#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  float pi;
  char ch;
  clrscr();
  printf("enter number:");
  scanf("%d",&n);
  printf("enter pi value:");
  scanf("%f",&pi);
  fflush(stdin);
  printf("enter character:");
  scanf("%c",&ch);
  printf("\n\n");
  printf("number is :%d\n",n);
  printf("pi values is :%f\n",pi);
  printf("character is :%c\n",ch);
  getch();

}
