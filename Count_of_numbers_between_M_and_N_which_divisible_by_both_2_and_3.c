#include<stdio.h>
int main()
{
    int i,n,m,s=0;
    scanf("%d %d",&m,&n);
    i=m;
    while(i<=n)
    {
        if(i%6==0)
        s++;
        
        i++;
    }
    printf("%d
",s);
    
}