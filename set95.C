#include <stdio.h>
void main()
{
   int p,t,r,si,res;
   scanf("%d %d %d",&p,&t,&r);
   si=(p*t*r)/100;
   res=ceil(si);
   printf("%d",res);
return 0;
}
