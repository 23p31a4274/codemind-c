#include<stdio.h>
int main()
{
    int t,l=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        if(t>l)
        {
            l=t;
        }
        n=n/10;
    }
    printf("%d",l);
}