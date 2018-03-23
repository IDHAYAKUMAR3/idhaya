#include<stdio.h>
#include<conio.h>
void main()
{
    int n,n1,n2;
    printf("\n enter the value");
    scanf("%d",&n);
    while(n==0)
    {
        n=n/10;
        n2=n;
        n1=+n;
        
        
    }
    printf(" the value is :%d",n);
    getch();
}
