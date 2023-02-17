// WAP to print
/*
0
1 1
2 2 2
3 3 3 3
4 4 4 4 4
 */
/*#include<stdio.h>
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
*/
// ------------------------------------------------------------
// WAP to print 
/*
     1
    2 2
   3 3 3 
  4 4 4 4
 5 5 5 5 5
*/ 

#include<stdio.h>
void main()
{
    int i, j;
    int count = 5;
    for (i = 0; i < 5; i++)//Outer loop work for row
    {
        for (j = 0; j < count; j++)
        {
            printf(" ");
        }
        
        for(j = 0; j <= i; j++) // inner loop work for column
        {
            printf("%d ", i);
        }
        printf("\n");
        count--;
    }
}
