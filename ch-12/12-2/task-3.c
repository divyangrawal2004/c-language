#include <stdio.h>

main()
{
    int size1, size2;
    printf("enter array rows:- ");
    scanf("%d", &size1);

    printf("enter array columns:- ");
    scanf("%d", &size2);

    int a[size1][size2];

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("enter array elements [%d] [%d] :-", i, j);
            scanf("%d",&a[i][j]);
        }
    }
  
    int sum = 0;
    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
        {
            sum = sum + a[i][j];

        }
          printf("\n\nsum is :- %d\n\n",sum);

          printf("AVG is :- %.2f",(float)sum/(size1*size2));
            
           
    
}