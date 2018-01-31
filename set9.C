#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k,sum=0;
printf("enter the integers:");
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
printf("%d",i);
}
for(j=1;j<=k;j++)
{
sum=sum+j;
}
printf("the sum of %d integers:",sum);
getch();
}
