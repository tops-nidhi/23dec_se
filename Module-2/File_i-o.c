#include<stdio.h>
int main()
{
    FILE  *fptr;
    char str[20], str1[20];
    printf("Enter your course:");
    scanf("%s",&str1);
    fptr = fopen("D:/nidhi batch/software engineering/23dec_se/module-2/hello.txt", "a");
    fprintf(fptr,"%s",str1);
    fclose(fptr);
    fptr = fopen("D:/nidhi batch/software engineering/23dec_se/module-2/hello.txt", "r");
    fscanf(fptr,"%s",&str);
    printf("%s",str);
    fclose(fptr);
}