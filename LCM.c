#include<stdio.h>
int main()
{
    int i,n,a,lcm,gcd;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(a%i==0&&n%i==0)
        {
            gcd=i;
        }
    }    
      lcm=(a*n)/gcd;
      printf("%d",lcm);

}