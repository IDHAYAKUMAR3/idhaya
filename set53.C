#include<stdio.h>
#include<conio.h>
void main()
{
    int i,v,n=0,j;
    scanf("%d",&i);
    for(j=1;i>10;j++)
    {
        v=i%10;
        n=n+v;
        i=i/10;
        
    }
    n=n+i;
    printf("%d",n);
    getch();
}

