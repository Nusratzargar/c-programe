#include<stdio.h>
#include<conio.h>
int main()
{
  int a=100,b;
  b=sizeof(a);
  printf("\n the size of a:%d",b);
   b=sizeof(double);
  printf("\n the size of double:%d",b);
   b=sizeof(123l);
  printf("\n the size of 123l:%d",b);
   b=sizeof(123.45);
  printf("\n the size of 123.45:%d",b);
   b=sizeof(123.45f);
  printf("\n the size of 123.45f:%d",b);
}
