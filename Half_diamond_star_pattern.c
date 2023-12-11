
#include<stdio.h>
int main()
{
    int n,h,i,j,k;
    scanf("%d",&n);
    if(n>=3&&n<=100)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(h=n-1;h>=1;h--)
    {
    	for(k=h;k>=1;k--)
        {
        	printf("*");
		}
		printf("
");
	}
    }
    else
    {
        printf("The pattern is not possible");
    }
}