#include<stdio.h>
int main()
{
    int i,n,r,rev=0;
    scanf("%d",&n);
    do
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(n!=0);
    printf("%d",rev);
}