#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,max;
  printf("Enter Two Number:::");
  scanf("%d%d",&a,&b);
  max=(a>b)?a:b;
  printf("\n Maximum value is :::%d",max);
  return 0;
}
