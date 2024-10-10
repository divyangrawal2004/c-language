#include<stdio.h>
#include<conio.h>
main()
{
	int mark;
	char grade;
	clrscr();
	printf("enter any mark:");
	scanf("%d",&mark);

		(mark>=91 && mark<=100)
		  ? grade='A'
			:(mark>=81 && mark<=90)
			 ? grade='B'
				:(mark>=71 && mark<=80)
				? grade='C'
					:(mark>=61 && mark<=70)
					? grade='D'
						:(mark>=33 && mark<=60)
						? grade='E'
						 :( grade='F');


	 switch(grade)
	   {
		case'A':
		printf("your grade is 'A'\nexellent work\n");
		break;

		case'B':
		printf("your grade is 'B'\nwelldone\n");
		break;

		case'C':
		printf("your grade is 'C'\ngood job\n");
		break;

		case'D':
		printf("your grade is 'D'\nyour passed\n");
		break;

		case'E':
		printf("your grade is 'E'\nyou are pass\n");
		break;

		case'F':
		printf("sorry, your failed..\n");
		break;

	   }

	   if(grade>='A' && grade<='E')
		{
			printf("congratulations.... you are eligible for the next level");

		}
	   else
		{
			printf("please try next time");
		}

	getch();
}