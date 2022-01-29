#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[20];
	int i,count=0;
	printf("Enter any string\n");
	gets (name);
	printf("you have entered the following string\n");
	puts(name);
	//logic for finding the lenght of the string
	i=0;
	while(name[i]!='\0')
	{
		count=count+i;
		i++;
	}
	printfr("The lenght of above given string is %d characters\n",count);
	getch();
}
