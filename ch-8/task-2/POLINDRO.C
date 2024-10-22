#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	int rev=0;
	int rem;
	clrscr();
	printf("enter any number:");
	scanf("%d",&i);

	n=i;
	while(n!=0)
	{
	    rem = n % 10;
	    rev = rev * 10 + rem;
	    n = n / 10;

	}
	if(rev==i)
	{
		printf("%d is polindrom \t",i);
	}
	else{
		printf("%d is not polindrom",i);
	}
	getch();

}