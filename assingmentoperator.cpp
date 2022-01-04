#include<stdio.h>
#include<conio.h>
int main()
{
   int a=10,b;
   b=++a;
   printf("\n After prefix Increament :");
   printf("a=%d and b=%d",a,b);
   a=10;
   b=a++;
   printf("\n After prefix Increament :");
   printf("a=%d and b=%d",a,b);
   
   return 0;
}
