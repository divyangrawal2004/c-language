#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("text.txt", "w");

    char msg[50] = "hello programming...!";

    if (fp != '\0')
    {
        fprintf(fp, "%s", msg);
    }
    else
    {
        printf("File could not be opened.\n");
    }

}