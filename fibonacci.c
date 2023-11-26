#include<stdio.h>
int main()
{
    int n,i,nxtnum,n1=0,n2=1;
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    for(i=1;i<=n-2;i++)
    {
        nxtnum=n1+n2;
        n1=n2;
        n2=nxtnum;
        printf("%d ",nxtnum);
    }
}