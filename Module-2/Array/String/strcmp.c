#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20], str2[20];
    int cmp;
    printf("Enter the 1st string:");
    scanf("%s",&str1);
    printf("Enter the 2nd string:");
    scanf("%s",&str2);
    cmp = strcmp(str1, str2);
    // printf("\nMax string is:%d", cmp);
    if (cmp > 0)
    {
        printf("\n1st string is max.");
    }
    else if (cmp == 01)
    {
        printf("\nBoth are equal.");
    }
    else
    {
        printf("\n2nd string is max.");
    }
    
    
}