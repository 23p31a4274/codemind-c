#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=65;i<n+65;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}