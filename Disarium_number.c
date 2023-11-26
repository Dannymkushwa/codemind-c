#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,r1,r,num,d=0,sumdig=0,powdig;
    scanf("%d",&n);
    x=n;
    y=n;
    num=n;
    while(x!=0)
    {
        r1=x%10;
        x=x/10;
        d++;   
    }
    int count=(d+1);
    while(y!=0)
    {
        r=y%10;
        count=count-1;
        powdig=pow(r,count);
        y=y/10;
        sumdig=sumdig+powdig;
    }
    if(sumdig==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}