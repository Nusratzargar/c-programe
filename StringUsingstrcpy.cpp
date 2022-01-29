#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter source string\n");
	gets(s1);
	printf("You have entered the following first string");
	puts(s1);
	//Logic for copying s1 into s2 strats from here
	strcpy(s2,s1);
	//The destined string s2 after copying s1 is given as \n
	printf("The second string s2 after copying s1 is given as\n");
	puts(s2);
	getch();
}
