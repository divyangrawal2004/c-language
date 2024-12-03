
// TNRS
int inputint()
{
    int n;

    scanf("%d", &n);

    return n;
}

// TSRN
void  arrayoutput(int arraysize , int array[])
{
    printf("\n\n array output \n\n");
    for(int i=0;i<arraysize;i++)
    {   
        printf("%d\t",array[i]);

    }
}

void arrayinput(int arraysize , int array[])
{
    printf("\n\n array input \n \n");
    for(int i =0;i<arraysize;i++)
    {
        printf("enter element a[%d] = ",i);
        array[i] = inputint(); 

    }
    arrayoutput(arraysize , array);
}
