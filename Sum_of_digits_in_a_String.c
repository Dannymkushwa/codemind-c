#include<stdio.h>
int main()
{
    int i,count=0;
    char str[100];
    scanf("%[^
]d",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            count+=str[i]-48;
        }
    }
    printf("%d",count);
}