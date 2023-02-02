/*+,-,*,/,%,++,--*/
#include<stdio.h>
void main()
{
    // int a=24, b=12;
    int a, b;
    int ans;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    ans = a + b;
    printf("\nAddition is:%d",ans);
    printf("\nSubstraction is:%d", a-b);
    ans = a * b;
    printf("\nMultiplication of a and b is:%d",ans);
    ans = a / b;
    printf("\nDivistion of a nad b is:%d",ans);
    ans = a % b;
    printf("\nModulo is:%d",ans);
    a++;
    printf("\nAfter incerment value of a is:%d",a);
    --b;
    printf("\nAfter decreement value of b is:%d",b);
}