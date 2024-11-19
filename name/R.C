#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
		   if((j==1 && (i>=2 && i<=7)) || (i==1 && (j>=2 && j<=4))
		   || (j==4 && (i>=1 && i<=3)) || (i==4 && (j>=1 && j<=3))
		   || (i==5 && j==3) || (i==6 && j==4) || (i==7 && j==5))

		   {
			printf("*");
		   }
		   else
		   {
			printf(" ");
		   }


		}
	       printf("\n");
	}
	getch();
}