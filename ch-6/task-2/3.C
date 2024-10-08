#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c,d;
  clrscr();
  printf("enter number is a,b,c,d:");
  scanf("%d %d %d %d",&a,&b,&c,&d);

  if(a==b && b==c && c==d && d==a)
  {
    printf("all is same.....");
  }
  else if(((a==b && a==c) || (a==d && a==d) || (a==c && a==d)) ||((b==a && b==c) || (b==c && b==d) || (b==a && b==d)) || ((c==a && c==b) || (c==a && c==d) || (c==b && c==d)) || ((d==a && d==b) || (d==b && d==c) || (d==a && d==c)))
  {
   printf("three values is same.....");
  }
  else if(a==b || b==c || c==d || d==a)
  {
   printf("both is same...");
  }

  else
	{
	if(a>b)
	{
	if(a>c)
	{
	printf("a is max....");
	}
	else
	{
	printf("c is max...");
	}
  }
  else if(b>c)
	{
	if(b>d)
	{
       printf("b is max...");
}
   else
	{
	      printf("d is max....");
	}
  }
  else
       {
       if(c>d)
       {
	      printf("c is max...");
       }
       else
       {
	      printf("d is max....");
       }
  }

  }
  getch();
}