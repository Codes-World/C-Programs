#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[50], str2[50], str[100];
	int i, k;
	
	printf("\n Enter first string: ");
	gets(str1);
	
	printf("\n Enter second string: ");
	gets(str2);
	
	for(i = 0; str1[i] != '\0'; i++)
	{
		str[i] = str1[i];
	}
	str[i] = ' ';
	i++;
	
	for(k = 0; str2[k] != '\0'; k++)
	{
		str[i+k] = str2[k];
	}
	str[i + k] = '\0';
	printf("\n After concat string = %s", str);
	getch();
}
