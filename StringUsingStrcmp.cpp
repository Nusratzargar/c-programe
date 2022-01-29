#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int x;
	printf("Enter first string\n");
	gets(s1);
	printf("Enter second string\n");
	gets(s2);
	printf("You have entered the following first string\n");
	puts(s1);
	printf("You have entered the following second string\n");
	puts(s2);
	//The below strcmp() functions checks whether s1 and s2 are same or not
	x=strcmp(s1,s2);
	if(x==0)
	printf("Strings are identical");
	else
	printf("String are not identical");
	getch();
}
