#include<stdio.h>
void main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            goto label;
        }
        printf("\n%d",i);
    }
    label:
        printf("\nThis is goto statment.");
}