#include <stdio.h>
#include<conio.h>
#include<string.h>
void main(void) {
char a[100];
int alphabet=0,number=0;
scanf("%s",a);
int i,v;
v=strlen(a);
for(i=0;i<v;i++)
{
if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
{
alphabet=1;
}
if('0'<=a[i] && a[i]<='9')
{
number=1;
}
}
if(number==1 && alphabet==1)
{
printf("yes");
}
else
printf("no");
getch();
}
