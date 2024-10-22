#include<stdio.h>
#include<conio.h>
main()
{
	int a=1;
	int n,ans;
	clrscr();
	printf("enter table number:");
	scanf("%d",&n);
	while(a<=10)
	{
		ans = n*a;
	      printf("\n\n %d * %d = %d",n,a++,ans);
	}
	getch();
}