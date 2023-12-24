#include<stdio.h>
int main()
{
    char str1[100],str2[100],x,y;
    scanf("%s %s",&str1,&str2);
    int i,j,flag=0;
    for(i=0;str1[i]!=NULL;i++)
    {
        x=str1[i];
    }
    for(j=0;str2[j]!=NULL;j++)
        {
        y=str2[j];
        }
    if(x==y)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}