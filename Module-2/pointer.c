#include<stdio.h>
void main()
{
    int a = 100;
    int *ptr;
    ptr = &a;
    printf("Address of a is:%d",ptr);
    /* 
    ptr++;
    printf("\n After increment address of a is:%d",ptr);
    */
    /**/
    printf("\nValue of a is:%d", *ptr);
    ++*ptr;
    printf("\nAfter increment value of a is:%d", a);
    *ptr = 13;
    printf(" \nValue of a is:%d", a);
}