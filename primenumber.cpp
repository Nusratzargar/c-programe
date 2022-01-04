#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
  printf("Enter the number \n");
  scanf("%d",&num);
  int count=0;
  for(int i=2;i<num;i++)
  {
  	if(num%i==0)
  	count++;
  }
  if(count!=0)
  {
  	printf("Number is not prime\n");
  }
  else
  {
  	printf("Number is prime\n");
  }
  
}
