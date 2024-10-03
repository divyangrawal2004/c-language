#include<stdio.h>
#include<conio.h>
main()
{
  int n=10,x=20;
  clrscr();
  printf("number is :\t%d %d %d %d %d\n",n++,n--,++n,--n,n--);
  printf("number is :\t%d %d %d %d %d",++x,x--,x++,x--,--x);
  getch();

}