#include<stdio.h>
int main()
{
    int n,i,sum=0,avg,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=sum/(i+1);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            count++;
        }
    }
    printf("%d",count);
}