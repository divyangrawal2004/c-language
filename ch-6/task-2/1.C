#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  clrscr();
  printf("enter the a,b,c:");
  scanf("%d %d %d",&a,&b,&c);
  if(a==b && b==c && c==a)
  {
       printf("all is same ....");
  }
  else if(a==b || b==c || c==a)
  {
	 printf("both is same....");

  }
  else
  {
     if(a>b)
  {
	if(a>c)
	{
		printf("a is max");
	}
	else
	{
		printf(" c is max");
	}
  }
  else
  {
	if(b>c)
	{
	       printf("b is max");
	}
	else
	{
		printf("c is max");
	}
  }
  }


  getch();
}