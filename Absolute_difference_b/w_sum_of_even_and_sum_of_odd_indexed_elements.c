#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,ev_sum=0,od_sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ev_sum=ev_sum+arr[i];
        }
        else
        {
            od_sum=od_sum+arr[i];
        }
    }
    printf("%d",abs(ev_sum-od_sum));
}