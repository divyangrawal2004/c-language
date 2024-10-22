#include<stdio.h>
#include<conio.h>
main()
{
	int n, first, last, sum;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);

	last=n%10;

	while(n!=0)
	{
		first=n;
		n = n/10;
	}

	sum = first+last;
	printf("sum :- %d",sum);

	getch();

}