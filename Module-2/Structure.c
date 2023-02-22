#include<stdio.h>
struct Structure
{
    int id;
    char nm[20];  
}st;
int main()
{
    printf("Enter your id:");
    scanf("%d",&st.id);
    printf("Enter your name:");
    scanf("%s",&st.nm);
    printf("\nYour id is:%d and your name is:%s", st.id, st.nm);
}