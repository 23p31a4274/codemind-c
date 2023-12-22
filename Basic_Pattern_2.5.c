#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n+64;i>64;i--)
    {
        for(j=i;j<=64+n;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}