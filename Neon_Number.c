#include<stdio.h>
int main()
{
    int n,q,r,s=0,p;
    scanf("%d",&n);
    p=n*n;
    q=p;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        q=q/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
       printf("Not Neon Number");
    }
}