#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name1[20],name2[20];
	int i,flag=0;
	printf("Enter first string\n");
	gets(name1);
	printf("Enter second string\n");
	gets(name2);
	printf("you have entered the following first string\n");
	puts(name1);
	printf("you have entered the following second string\n");
	puts(name2);
	i=0;
	while(name1[i]!='\0'||name2[i]!='\0')
	{
		if(name1[i]!=name2[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("The strings are Identical");
	}
	else
	{
		printf("The strings are not Identical");
	}
}
