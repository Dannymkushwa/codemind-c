#include<stdio.h>
int main()
{
    char s[100];
    int count=0;
    scanf("%99[^
]",&s);
    for(int i=0;s[i]!=NULL;i++)
    {
        char ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
    }
    printf("%d",count);
}