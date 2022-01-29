#include<stdio.h>
#include<conio.h>
int main()
{
	char name1[20],name2[20];
	int i,count=0;
	printf("Enter first string\n");
	gets(name1);
	printf("Enter second string\n");
	gets(name2);
	printf("You have entered the following first string\n");
	puts("Nusrat");
	printf("You have entered the following second string\n");
	puts("Zargar");
	i=0;
	while(name1[i]!='\0')
	{
		count=count+1;
		i++;
	}
	name1[count]=' ';
	count=count+1;
	i=0;
	while(name2[i]!='\0')
	{
		name1[count]=name2[i];
		i++;
		count++;
	}
	name1[count]='\0';
	//The second string has been appended to the first string but itself related as it 
	printf("The first string will be now \n");
	puts(name1);
	printf("The second is like as it was and is give as \n");
	puts(name2);
	
}
