#include<stdio.h>
#include<conio.h>
main()

{
	long int n,a=0;
	clrscr();
	printf("enter any number:");
	scanf("%ld",&n);

	while(n!=0)
	{
		n = n / 10;

		 a++;

	}
	printf("total number is : %ld",a);

	getch();

}