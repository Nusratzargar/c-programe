#include<stdio.h>
#include<conio.h>
int main()
{
	char s1[20],s2[10];
	int i;
	printf("Enter source string");
	gets(s1);
	printf("you have entered the following first string");
	puts(s1);
	//logic for copying s1 into s2 starts from here
	i=0;
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	//the destined string s2 after copying will be given as
	printf("The second string s2 after copying s1 is given as\n");
	puts(s2);
}
