#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("%d",i);
}