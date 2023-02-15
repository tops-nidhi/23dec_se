#include<stdio.h>
void main()
{
    int i, j;
    for (i = 0; i < 5; i++)//Outer loop work for row
    {
        for(j = 0; j <= i; j++) // inner loop work for column
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
/*
0
1 1
2 2 2
3 3 3 3
4 4 4 4 4
*/ 