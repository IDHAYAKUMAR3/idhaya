
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[50],s2[50];
int i,v;
printf("enter the two strings : \n");
scanf("%s%s",&s1,&s2);
i=strlen(s1);
v=strlen(s2);
if(i>=v)
{
printf("%s",s1);
}
else
{
printf("%s",s2);
}
getch();
}
