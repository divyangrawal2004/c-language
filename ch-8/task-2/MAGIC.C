#include<stdio.h>
#include<conio.h>
main()
{
      int i,n,sum=0,mul=1,rem,rev;
      clrscr();
      printf("enter any number:");
      scanf("%d",&n);
      i=n;
      while(n!=0)
      {
		rem = n%10;
		sum += rem;
		mul *= rem;
		n = n/10;
      }
      if(sum==mul)
      {
	printf("%d is magic number..",i);

      }
      else
      {
	printf("%d is not magic number..",n);
      }
      getch();
}