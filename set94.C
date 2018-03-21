#include<stdio.h>
void main() 
{
   int a,k,b[50],i;
   scanf("%d",&a);
   scanf("%d",&k);
   for(i=1;i<=a;i++)
   {
       scanf("%d",&b[i]);
   }
   printf("%d",b[k]);
return 0;
}
