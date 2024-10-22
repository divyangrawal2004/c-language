#include<stdio.h>
#include<conio.h>
main()
{
	long int n,i,mul=1;
	clrscr();
	printf("enter factorial number:");
	scanf("%ld",&n);

	for(i=1;i<=n;i++)
	{
		mul=mul*i;

	}
	printf("\n\nmultiplaction is %ld",mul);
	getch();

}