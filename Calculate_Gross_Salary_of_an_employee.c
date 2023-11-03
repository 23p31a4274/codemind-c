#include<stdio.h>
int main()
{
    float PF,BS,HRA,DA,GS;
    scanf("%f%f%f",&BS,&HRA,&DA);
    PF=(12*BS)/100.0;
    GS=PF+BS+HRA+DA;
    printf("%.2f
%.2f",PF,GS);
    
}