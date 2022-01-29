#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter first string\n");
	gets(s1);
	printf("Enter second string\n");
	gets(s2);
	printf("You have entered the following first string\n");
	puts(s1);
	printf("You have entered the following second string");
	puts(s2);
	//the logic of concatenating two strings from here
	strcat(s1,s2);
	//The second string has been appended to the first string but itself remained as it 
	//using the above function
	printf("The first string after concatenation will be now\n");
	puts(s1);
	printf("The second is like as it was and is given as\n");
	puts(s2);
	getch();
}
