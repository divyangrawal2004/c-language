#include <stdio.h>

struct student
{
    int id;
    char name[20];
    float per;
};

int main()
{
    int num;
    printf("enter number of student:-");
    scanf("%d", &num);

    struct student s1[num];

    for (int i = 0; i < num; i++)
    {
        printf("\nenter student ID:-");
        scanf("%d", &s1[i].id);
        fflush(stdin);

        printf("enter student Name:-");
        scanf("%s",&s1[i].name);

        printf("enter student PER:-");
        scanf("%f",&s1[i].per);
        printf("\n");
    }

    printf("\nStudent Data\n");

    for(int i=0;i<num;i++)
    {
        printf("\nId \t: %d",s1[i].id);
        printf("\nName \t: %s",s1[i].name);
        printf("\nPER \t: %.2f\n\n",s1[i].per);
    }
}
