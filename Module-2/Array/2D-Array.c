#include<stdio.h>
void main()
{
    int array[3][2];
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nEnter the value of array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nValue of array[%d][%d] is:%d",i,j, array[i][j]);
        }
    }
}
// Task to create 3❌3 matrix:-

/*
1 2 3
4 5 6
7 8 9
*/