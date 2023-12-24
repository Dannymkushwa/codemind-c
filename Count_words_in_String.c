#include<stdio.h>
int main()
{
    char input[100];
    scanf("%[^
]",&input);
    int i,count=0;
    for(i=0;input[i]!=NULL;i++)
    {
        if(input[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}