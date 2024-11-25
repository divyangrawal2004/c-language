#include <stdio.h>
main()
{
   int size1, size2;

   printf("Enter the size of array1 : ");
   scanf("%d", &size1);

   printf("Enter the size of array2: ");
   scanf("%d", &size2);

   int a[size1], b[size2], c[size1 + size2];

   for (int i = 0; i < size1; i++)
   {
      printf("Enter element %d :-", i + 1);
      scanf("%d", &a[i]);
   }

   for (int i = 0; i < size2; i++)
   {
      printf("Enter element %d :", i + 1);
      scanf("%d", &b[i]);
   }

   for (int i = 0; i < size1; i++)
   {
      c[i] = a[i];
   }

   for (int i = 0; i < size2; i++)
   {
      c[size1 + i] = b[i];
   }

   for (int i = 0; i < size1 + size2; i++)
   {
      printf("%d  ", c[i]);
   }
}