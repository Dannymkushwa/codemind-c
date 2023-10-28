#include<stdio.h>
int main()
{
    int m, x;
    scanf("%d",&m);
    printf("%d Hour(s) %d Minute(s)", m/60, m-((m/60)*60));
}