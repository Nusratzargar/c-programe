#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("\nEnter the value of A\n ");
	scanf("%d",&a);
	printf("\nEnter the value of B\n");
	scanf("%d",&b);
	printf("\nBefore swapping");
	printf("A::%d\nB::%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping\n");
	printf("\A::%d\nB::%d",a,b);
	getch();
}
