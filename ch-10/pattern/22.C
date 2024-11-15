#include<stdio.h>
#include<conio.h>
main()

{
	int i,j;
	clrscr();

	for(i=11;i>=7;i--)
	{
		for(j=i;j>=7;j--)
		{
			printf("%d ",i);

		}
		printf("\n");
	}
	getch();

}