/*
&,|, ~, ^, <<, >>
*/
#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    printf("\nBitwise:\n AND is:%d", a&b);
    printf("\nOR is:%d", a|b);
    printf("\nCompliment is:%d", ~a);
    printf("\nXOR is:%d", a^b);
    printf("\nShift left is:%d", a<<1);
    printf("\nShift right is:%d", b>>1);
}