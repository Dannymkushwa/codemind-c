#include<stdio.h>
int main()
{
    int x,i;
    float c=0.0,sum=0.0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
       c=(1.00/i);
       sum=sum+c;
    }
    printf("%.2f ",sum);
}