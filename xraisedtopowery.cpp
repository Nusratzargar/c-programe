#include<stdio.h>
#include<conio.h>
int main()
{
	 int x,y,i,s=1;
	 printf("program to calculate of x raised to power y \n");
	 printf("Now enter values for x and y \n");
	 scanf("%d%d",&x,&y);
	 i=y;
	 while(i>=1)
	 {
	 	s=s*x;
	 	i--;
	 }
	 printf("%d raised to power %d=%d",x,y,s);
	 
}
