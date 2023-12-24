#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%2!=0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}