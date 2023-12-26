#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",&str);
    int i,count=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            count++;
        }
    }
    printf("%d",count);
}