#include<stdio.h>
int main()
{
	int i,j, r,c;
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int odd_sum=0,even_sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    if(arr[i][j]%2==0)
		    {
		        even_sum+=arr[i][j];
		    }
		    else
		    {
		        odd_sum+=arr[i][j];
		    }
		}
	}
	printf("%d %d",even_sum,odd_sum);
}