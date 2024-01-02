#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20];
    scanf("%[^
]",&str);
    strcpy(str1,str);
    int start=0,end=strlen(str1)-1;
    while(start<end)
    {
        char temp=str1[start];
        str1[start]=str1[end];
        str1[end]=temp;
        start++;
        end--;
    }
        printf("%s",str1);
}