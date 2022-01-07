#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,s;
	printf("Enter the number of elements that you are interested in but not more than 20\n");
	scanf("%d",&n);
	printf("ok enter %d elements now\n",n);
	for(i=0;i<n;i++)
     {
     	s=s+a[i];
	 }
	 printf("sumof elements of above array=%d",s);
 }
