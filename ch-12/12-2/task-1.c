#include<stdio.h>

main()
{

    int array[5][3]= {
        {10,20,30},{40,50,60},{70,80,80},{90,10,20},{30,40,50}
    };
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

}