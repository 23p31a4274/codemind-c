#include<stdio.h>
int main()
{
    int i,m,s=0,n;
    scanf("%d",&n);
    m=n*n;
    for(i=0;i<m;i++)
    {
        s=m%10;
        s=s+i;
        m=m/10;
    }
            if(s==n)
        {
            printf("Neon Number");
        }
        else
        {
            printf("Not Neon Number");
        }
}