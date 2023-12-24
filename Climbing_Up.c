#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x%y==0)
    {
        printf("%d",x/y);
    }
    else if(y>x)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",(x/y)+(x%y));
    }
}