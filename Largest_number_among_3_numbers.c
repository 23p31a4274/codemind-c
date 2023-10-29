#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
}#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b<=a/30)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}