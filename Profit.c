#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=a*b/a;
    if(x>=a)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}