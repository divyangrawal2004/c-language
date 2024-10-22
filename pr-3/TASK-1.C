#include<stdio.h>
#include<conio.h>
main()
{
	char ch='a';
	clrscr();

	do{
		printf("%c \t",ch++);
		ch+=3;

	} while(ch<='z');
	getch();


}