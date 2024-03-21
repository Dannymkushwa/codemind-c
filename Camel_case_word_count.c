#include<stdio.h>
int main()
{
    int i,count=1;
    char str[100];
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65&&str[i]<=90&&i!=0)
        {
            count++;
        }
    }
    printf("%d",count);
}