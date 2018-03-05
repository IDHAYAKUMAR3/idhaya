#include<stdio.h>
#include<conio.h>
void main()
{
    int i,v,b;
    printf("enter the number");
    scanf("%d%d",&i,&v);
    b=i-v;
    if(b%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
