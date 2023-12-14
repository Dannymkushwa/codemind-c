#include<stdio.h>
int main()
{
    int n,j,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf("*");
        }
       for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        
           printf("
");
    }
}