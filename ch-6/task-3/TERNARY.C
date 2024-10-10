#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter any number:");
	scanf("%d %d %d",&a,&b,&c);

	 (a<b)
	      (a<c)
	      ? printf("a is minimum..")
	      : printf("c is minimum..")

	       (b<c)
		  ? printf("b is minimum..")
		   : printf("c is minimum..");
	getch();
}