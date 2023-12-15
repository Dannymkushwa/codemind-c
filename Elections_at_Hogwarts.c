#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x<=50&&y<=50&&z<=50)
    {
        printf("NOTA");
    }
    else
    {
        if(x>y&&x>z&&x>50)
        {
            printf("Gryffindor");
        }
        else if(y>x&&y>z&&y>50)
        {
            printf("Slytherin");
        }
        else if(z>x&&z>y&&z>50)
        {
            printf("Hufflepuff");
        }
    }
}