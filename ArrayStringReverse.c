#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int i, count = 0;
	
	printf("\n Enter a string: ");
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++)
		count++;
		
	printf("\n Reverse string = ");
	for(count--; count >= 0; count--)
	{
		printf("%c", str[count]);
	}
	getch();
}
