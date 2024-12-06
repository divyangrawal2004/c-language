#include<stdio.h>
void main()
{
    int a= 18;
    char ch = 'A';

    printf("Int size\t : %zu bytes\n",sizeof(int));
    printf("Character size\t : %zu bytes\n" ,sizeof(char));
    printf("Float size\t : %zu bytes\n" ,sizeof(float));
    printf("Double size\t : %zu bytes\n" ,sizeof(double));
    printf("Long int size\t : %zu bytes\n" ,sizeof(long int));
    printf("Long long int size : %zu bytes\n" ,sizeof(long long int));
    printf("Short int size\t : %zu bytes\n" ,sizeof(short int));

    int array[7];
    printf("\n\n");

    printf("Array size : %zu bytes", sizeof (array));

    char str[45];
    printf("\n\n");
    printf("String size : %lu bytes\n\n", sizeof(str));

    int size = sizeof (array) / sizeof(array[0]);

    printf("Array size : %d",size);

}