#include<stdio.h>
int main()
{
    char s[100];
    int count=0;
    scanf("%s",&s);
    char ch;
    for(int i=0;s[i]!=NULL;i++)
    {
        count++;
        if(count==7)
        {
            ch=s[i];
        }
    }
    printf("%c",ch);
}