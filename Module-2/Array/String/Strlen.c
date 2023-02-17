#include<stdio.h>
#include<string.h>
void main()
{
    int len;
    char str1[20];
    printf("Enter the first string:");
    scanf("%s",&str1);
    len = strlen(str1);
    printf("\nLength of your string is:%d",len);
}