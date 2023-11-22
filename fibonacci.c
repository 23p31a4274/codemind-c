#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,no;
    scanf("%d",&no);
    printf("%d %d",a,b);
    for(i=2;i<no;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}