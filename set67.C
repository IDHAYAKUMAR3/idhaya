#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,j;
    scanf("%d",&a);
    b=a;
    for(j=a;j<=(a*10);j++)
    {
        if(j%10==0)
        {
            printf("%d",j);
            break;
        }
    }
        getch();
    }
