#include<stdio.h>
int main()
{
    int x,r,z,rev=0;
    scanf("%d",&x);
    z=x;
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    if (rev==z)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}