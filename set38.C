#include <stdio.h>
#include<conio.h>
int main(void)
{
int m,n,temp;
scanf("%d%d",&m,&n);
temp=m;	
m=n;
n=temp;
printf("%d\t%d",m,n);
getch();
}
