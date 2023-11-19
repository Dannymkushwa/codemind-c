#include<stdio.h>
int main()
{
    int mark, i=1,flag=0;
    while(i<=5)
    {
        scanf("%d",&mark);
        i++;
        if (mark<=34)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("FAILED");
    }
    else
    {
        printf("PASSED");
    }
}