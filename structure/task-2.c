#include <stdio.h>
#include<string.h>
struct employe
{
    int id, age, experince;
    char name[20], role[20], city[20], company_name[20];
};
void main()
{
    int n;
    printf("enter employe number:-");
    scanf("%d", &n);

    struct employe e1[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nenter your id:-");
        scanf("%d", &e1[i].id);
        fflush(stdin);

        printf("enter your name:-");
        scanf("%[^\n]",&e1[i].name);
        fflush(stdin);
        printf("enter your age:-");
        scanf("%d",&e1[i].age);
        fflush(stdin);
        printf("enter your role in company:-");
        scanf("%[^\n]",&e1[i].role);
        fflush(stdin);
        printf("enter your city:-");
        scanf("%[^\n]",&e1[i].city);
        fflush(stdin);
        printf("enter your experiance:-");
        scanf("%d", &e1[i].experince);
        fflush(stdin);
        printf("enter your company name:-");
        scanf("%[^\n]",&e1[i].company_name);
        fflush(stdin);
    }

    printf("\n\n Employe data\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Id :- %d\n", e1[i].id);
        printf("Name :- %s\n", e1[i].name);
        printf("Age :- %d\n", e1[i].age);
        printf("Role :- %s\n", e1[i].role);
        printf("City :- %s\n", e1[i].city);
        printf("Experiance :- %d\n", e1[i].experince);
        printf("Company name :- %s\n\n\n", e1[i].company_name);
    }
}
