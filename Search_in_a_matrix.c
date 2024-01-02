#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf(" %d",&b);
    int arr[a][b];
    int i,j,x,flag=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("
%d ",&arr[i][j]);
        }
    }
    scanf("
%d",&x);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(x==arr[i][j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}