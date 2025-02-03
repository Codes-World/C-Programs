#include<stdio.h>
#include<conio.h>
void main()
{
	int count = 0, *pcount = &count, i;
	char str[50]; 
	int *pstr = &str;
	
	printf("\n Enter a string: ");
	gets(str);
	
	for(i = 0; pstr[i] != '\0'; i++)
		pcount++;
	for(pcount--; pcount >= 0; pcount--)
	{
		printf("%c", str[*pcount]);
	}
	getch();
}
