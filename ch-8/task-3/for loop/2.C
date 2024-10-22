#include<stdio.h>
#include<conio.h>
main()
{
	long int i,n1=0,n2=1,next,n;
	clrscr();
	printf("enter any number:");
	scanf("%ld",&n);
	printf("%ld \t",n1);
	printf("%ld \t",n2);


	n1=0;
	n2=1;
	next=n1+n2;

	for(i=3;i<=n;i++)
	{


	   printf("%d\t",next);

	   n1=n2;
	   n2=next;
	   next=n1+n2;

	   if(next>=n)
	   {
		break;
	   }
	}


	getch();


}