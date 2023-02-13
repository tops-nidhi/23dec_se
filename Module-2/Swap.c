#include<stdio.h>
void main()
{
    int a, b , temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("Before value swapping value a is:%d and value of b is:%d", a, b);
    temp = a;
    b = a + b;
    a = b - a;
    b = temp;
    printf("\nAfter value swapping value of a is:%d and b is:%d", a, b);
}