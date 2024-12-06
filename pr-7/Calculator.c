#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}
int divide(int num1, int num2)
{
    if (num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        printf("not divide by zero....");
        return 0;
    }
}
int moduls(int num1, int num2)
{
    return num1 % num2;
}
void main()
{

    int num;
    int num1, num2;
    do
    {
        printf("\n enter 1 for + ");
        printf("\n enter 2 for - ");
        printf("\n enter 3 for * ");
        printf("\n enter 4 for / ");
        printf("\n enter 5 for %% ");
        printf("\n enter 0 for the exit  \n\n");

        printf("enter your choice:-");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        else if (num >= 1 && num <= 5)
        {
            printf("enter the first number:-");
            scanf("%d", &num1);
            printf("enter the second number:-");
            scanf("%d", &num2);
        }
        switch (num)
        {
        case 1:
            printf("\naddition is %d & %d :- %d\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("\nsubtraction is %d & %d :- %d\n", num1, num2, subtraction(num1, num2));
            break;
        case 3:
            printf("\nmultiplaction  is %d & %d :- %d\n\n", num1, num2, multiplication(num1, num2));
            break;
        case 4:
            printf("\nDivision  is %d & %d :- %d\n\n", num1, num2, divide(num1, num2));
            break;
        case 5:
            printf("\nModulus  is %d & %d :- %d\n\n", num1, num2, moduls(num1, num2));
            break;
        default:
            printf("\n\nInvalid choice !!.. please try again...\n");
        }
    } while (1);   
}