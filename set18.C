#include <stdio.h>
#include<conio.h>
void main()
{
  int a=15, b=160, i, temp, num, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &a, &b);
  printf("Armstrong numbers between %d an %d are: ", a, b);
  for(i=a+1; i<b; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  getch();
}
