#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50], *pstr = str;
	printf("\n Enter a string: ");
	gets(str);
	
	for(; (*pstr) != '\0'; pstr++ )
	{
		if((*pstr) >= 97 && (*pstr)<= 122)
		{
			*pstr -= 32;
		}
	}
	printf("\n UpperCase = %s", str);
}
