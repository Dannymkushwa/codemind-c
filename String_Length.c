#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int i,count=0;
    for(i=0;str[i]!=0;i++)
    {
        count++;
    }
    printf("%d",count);
}