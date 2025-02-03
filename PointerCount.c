#include<stdio.h>
#include<conio.h>
void main()
{
	int ctr = 0, *pctr = &ctr;
	char str[50];
	char *pstr = str;
	
	printf("\n Enter a string = ");
	gets(str);
	
	for(; (*pstr) != '\0'; pstr++)
	{
		(*pctr)++;
	}
	
	printf("\n Length = %d", (*pctr));
	getch();
}
