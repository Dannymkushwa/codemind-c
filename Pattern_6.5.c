#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i+1;j<=n;j++)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%c ",(65+n)-i);
        }
        printf("
");
    }
}