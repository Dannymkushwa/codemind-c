#include<stdio.h>
int main()
{
    int n,i=1,x=0;
    scanf("%d",&n);
    while(i<=n)
    {
        x=x+i;
         i++;
    }
    printf("%d",x);
}