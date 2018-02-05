#include<stdio.h>
#include<conio.h>
void main()
{
int i,v,c,n;
printf("enter the two numbers:");
scanf("%d%d",&i,&v);
for(c=i+1;c<v;c++)
{
if(c%2==0)
{
printf("%d\n",c);
}
}
getch();
}
