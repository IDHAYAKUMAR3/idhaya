#include<stdio.h>

void main()
{ 
    int n,i,r,s;
    scanf("%d",&n);
    scanf("%d",&r);
    n++;
    while(n<r)
    {   s=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                s=1;
                break;
            }
        }
        if(s==0)
        printf("%d ",n);
        
        n++;
    }
   
}
