#include<stdio.h>
#include<conio.h>
main()
{
 int num;
 clrscr();
 printf("enter any number:");
 scanf("%d",&num);
 if(num>=1)
 {
     printf("number is positive....");
 }
 else if(num<0)
 {
    printf("number is nagetive...");
 }
 else{
     printf("number is neutral...");
 }

 getch();
}