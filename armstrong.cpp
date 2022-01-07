#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x,r,temp,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		x=temp%10;
		sum=sum+x*x*x;
		temp=temp/10;
	}
	if(n==sum)
	printf("the number is armstrong number%d",sum);
	
	else
	printf("the number is not armstrong number");
}
