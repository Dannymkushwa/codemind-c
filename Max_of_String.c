#include<stdio.h>
int main()
{
    int i;
    char str[100],temp;
    scanf("%[^
]s",str);
    temp=str[0];
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>temp)
        {
            temp=str[i];
        }
    }
    printf("%c",temp);
}