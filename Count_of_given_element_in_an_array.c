#include<stdio.h>
int main()
{
    int n,i,z,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(z==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}