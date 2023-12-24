#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
  int hd=(24-h)*60;
   if(m==0)
   {
       printf("%d",hd);
   }
   else
   {
       printf("%d",hd-m);
   }
}