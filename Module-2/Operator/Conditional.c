#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the 2 value of a and b:");
    scanf("%d%d",&a,&b);
    ( a > b) ? (printf("A is max.")) : (printf("B is max."));
}