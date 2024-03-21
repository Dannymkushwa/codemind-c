#include<stdio.h>
int main()
{
    int i,count=0,flag=0;
    char str[100],str1[100];
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++)
    {
        str1[i]=str[i];
        count++;
    }
    int j=0,k=count-1;
    char temp;
    while(j<k)
    {
        temp=str[j];
        str[j]=str[k];
        str[k]=temp;
        j++;
        k--;
    }
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]!=str1[i])
            flag=1;
    }
    if(flag==1)
        printf("Not Palindrome");
    else
    printf("Palindrome");
}