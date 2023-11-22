#include<stdio.h>
int main()
{
    int x,y,i,sq,cb;
    scanf("%d %d",&x,&y);
    for(i=(x+1);i<=(y-1);i++)
    {
        sq=i*i;
        cb=i*i*i;
        printf("%d %d %d
",i,sq,cb);
    }
}