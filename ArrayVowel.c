#include<stdio.h>
#include<conio.h>
void main()
{
	char str[40];
	int count = 0, i; 
	
	printf("\n Enter a string: ");
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			count++;
		}
	}
	
	printf("\n Vowel letter of this word is %d", count);
}
