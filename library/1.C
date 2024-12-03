#include<stdio.h>
#include<conio.h>
main()
{
 int num;
 char lang;
 char n[200];
 clrscr();
 printf("/\\welcome in library.../\\");
 printf("\nenter 1 for Phychology books....");
 printf("\nenter 2 for Zoology books....");
 printf("\nenter 3 for Biology books....");
 printf("\nenter 4 for About Relations books....");
 printf("\nenter 5 for Bussiness Ideas books....");
 printf("\nenter 6 for Computer Section books....");
 printf("\nenter 7 for Children Section books....");
 printf("\nenter 8 for Share Market books....");

 printf("\n\n\nenter any number:");
 scanf("%d",&num);

 switch(num)
 {
	case 1:
	printf("PHYCHOLOGY BOOKS :-\n\n");

		switch(num)
		{
		  case 1:
		  printf("1. learners mindset\n");
		  printf("2. power of your sybconscious mind\n");
		  printf("3. a concise textbook of human psychology\n");
		  printf("4. manipulation\n");
		  scanf("%d",&num);

			switch(lang)

			{
				case 'a':
				case 'b':
				case 'c':
				case 'd':
				case 'e':
				case 'f':
				printf("Gujrati");
				printf("English");
				printf("Hindi");
				scanf("%c",&lang);

			}
		  break;

		}
	break;

	case 2:
	printf("ZOOLOGY BOOKS :-\n\n");

		switch(num)
		{

		  case 2:
		  printf("1. a short history of mearly everything\n");
		  printf("2. the god delusion \n");
		  printf("3. a brief history of time\n");
		  printf("4. the grand design\n");
		  break;

		}
	break;

	case 3:
	printf("BIOLOGY BOOKS :-\n\n");

		switch(num)
		{
		  case 3:
		  printf("1. dinesh biology\n");
		  printf("2. the selfish gene\n");
		  printf("3. ncert biology\n");
		  printf("4. the immortal life of henritta lacks\n");
		  break;

		}
	break;

	case 4:
	printf("ABOUT RELESHIONS BOOKS :-\n\n");

		switch(num)
		{
		  case 4:
		  printf("1. love & respect\n");
		  printf("2. the fault in our starts\n");
		  printf("3. educated\n");
		  printf("4. nonviolent communication\n");
		  break;

		}
	break;

	case 5:
	printf("BUSSINESS IDEAS :-\n\n");

		switch(num)
		{
		  case 5:
		  printf("1. the lean startup\n");
		  printf("2. zero to one\n");
		  printf("3. start with why\n");
		  printf("4. good to great\n");
		  break;

		}
	break;

	case 6:
	printf("COMPUTER SECTION :-\n\n");

		switch(num)
		{
		  case 6:
		  printf("1. algorithms\n");
		  printf("2. computing systems\n");
		  printf("3. operation system\n");
		  printf("4. c programming language\n");
		  break;

		}
	break;

	case 7:
	printf("CHILDREN SECTION :-\n\n");

		switch(num)
		{
		  case 7:
		  printf("1. goodnight moon\n");
		  printf("2. charlotters web\n");
		  printf("3. the cat in the hat\n");
		  printf("4. the snowy day\n");
		  break;

		}
	break;

	case 8:
	printf("SHARE MARKET :-\n\n");

		switch(num)
		{
		  case 8:
		  printf("1. the intelligent investor\n");
		  printf("2. one up on well street\n");
		  printf("3. the warren buffett way\n");
		  printf("4. breating the street\n");
		  break;

		}
	break;

	default:
	printf("invalid number....");
 }



 getch();

}




