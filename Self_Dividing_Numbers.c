#include<stdio.h>
int main()
{
    int a,b,i,x,r,count=0,flag=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=i;
        count=0;
        flag=0;
        while(x)
        {
            r=x%10;
            if(r==0)
            {
                count==0;
            }
            else
            {
                if(i%r==0)
                {
                    count++;
                }
            }
            flag++;
            x=x/10;
        }
        if(flag==count)
            {
               printf("%d ",i);
            }
    }
}