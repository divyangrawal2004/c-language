#include <stdio.h>
#include <string.h>
struct mobile
{
    int model, price;
    char color[20], company_name[20];
};
void main()
{
    int n;
    printf("enter mobile data:-");
    scanf("%d", &n);

    struct mobile m1[n];

    for (int i = 0; i < n; i++)
    {

        fflush(stdin);
        printf("enter your company name:-");
        scanf("%[^\n]", &m1[i].company_name);
        fflush(stdin);
        printf("enter your color:-");
        scanf("%[^\n]", &m1[i].color);
        fflush(stdin);
        printf("enter your modal:-");
        scanf("%d", &m1[i].model);
        fflush(stdin);
        printf("enter your price:-");
        scanf("%d", &m1[i].price);
        fflush(stdin);
    }

    printf("\n\n Mobile data\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("company name :- %s\n", m1[i].company_name);
        printf("color :- %s\n", m1[i].color);
        printf("modal:- %d\n", m1[i].model);
        printf("price :- %d\n", m1[i].price);
    }
}