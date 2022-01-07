#include<stdio.h>
#include<conio.h>
int main()
{
	int x,temp,f,l,i,j,sum=0;
	printf("Enter the range");
	scanf("%d",&f);
	scanf("%d",&l);
	for(i=f;i<=l;i++)
	{
		sum=0;
		temp=i;
		while(temp!=0)
		{
			x=temp%10;
			sum=sum+x*x*x;
			temp=temp/10;
		}
		if(i==sum)
		{
			printf("%d",sum);
		}
	}
}
