#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,ev_sum=0,od_sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ev_sum+=arr[i];
        }
        else
        {
            od_sum+=arr[i];
        }
    }
    printf("%d",abs(ev_sum-od_sum));
}