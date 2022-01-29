#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char abc[20];
	int x;
	printf("Enter any string\n");
	gets(abc);
	printf("You have entered the following string\n");
	puts(abc);
	x=strlen(abc);
	printf("The length of string is %d characters \n",x);
	getch();
}
