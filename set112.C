#include<stdio.h>
void main()
{
int a[1000],b,c,d,i;
scanf("%d",&b);
scanf("%d",&c);
for(i=0;i<b;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
if(a[i]==b)
{
    d=1;
}
}
if(d==1)
{
printf("yes");
}
return 0;
}
