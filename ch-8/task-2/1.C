#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	int a=1;
	int sum=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	while(a<=n)
	{
		  sum = sum+a;
		  printf("%d\t",a++);


	}
	printf("\n\n sum is: %d\t",sum);
	getch();
}