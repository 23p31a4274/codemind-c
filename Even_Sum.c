#include<stdio.h>
int main()
{
int n,i,s=0;
int arr[n];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
    s=s+arr[i];
    }
}
  printf("%d",s);
}