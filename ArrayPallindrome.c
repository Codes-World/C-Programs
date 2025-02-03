#include<stdio.h>
#include<conio.h>
void main()
{
	char str[40];
	int i, j, len;
	
	printf("\n Enter the string to check pallindrome: ");
	gets(str);
	
	for(len = 0; str[len] != '\0'; len++);
	for(i = 0, j = len - 1; i < len / 2 && str[i] == str[j]; i++, j--);
	
	if(i >= j)
	{
		printf("\n Pallindrome");
	}
	else
	{
		printf("\n Not Pallindrome");
	}
	getch();
}
