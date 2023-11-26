#include<stdio.h>
int main()
{
int n,i,nxtnum,n1=0,n2=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    nxtnum=n1+n2;
    n1=n2;
    n2=nxtnum;
    if(n==nxtnum)
    {
        break;
    }
}
if(n==nxtnum||n==n1||n==n2)
        {
        printf("True");
        }
        else
        {
            printf("False");
        }
}