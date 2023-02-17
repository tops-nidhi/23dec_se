#include<stdio.h>
void main()
{
    // char str[5] = {'a','b','c','d','e'};
    // char str[5]={"abcde"};
    char str[5];
    printf("\nEnter your string:");
    scanf("%s",&str);
    printf("\nYour string is:%c", str[4]);
    printf("\nYour string is:%s", str);
}