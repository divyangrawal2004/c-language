#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			if(i%2==0)
			{
			    printf("4");
			}
			else
			{
			    printf("5");
			}
		}
		printf("\n");
	}

	getch();

}