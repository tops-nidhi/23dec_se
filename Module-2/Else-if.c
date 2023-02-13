#include<stdio.h>
void main()
{
    int no;
    printf("\nEnter the value of no to check where it's posititive or not:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("\nNo is positive.");
    }
    else if(no == 0)
    {
        printf("\nNo is zero.");
    }
    else
    {
        printf("\nNo is negative.");
    }
}