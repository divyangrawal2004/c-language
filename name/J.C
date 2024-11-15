#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
		  if((j==3 || i==1) || ( i==7 && (j==2))||(i==6 && (j==1)) )
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