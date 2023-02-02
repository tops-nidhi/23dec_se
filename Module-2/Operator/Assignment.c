/*
+=,-=,*=,/=
a = 5;b =10
a+=b;
a = a + b
a = 5 + 10
a = 15
*/
#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a, &b);
    a += b;
    printf("\nAddition is:%d",a);
}