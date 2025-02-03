#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int i, j, k;
	
	printf("\n Enter a string: ");
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++);
	
	for(j = 0; j <= i; j++)
	{
		for(k = i-1; k >= j; k--)
		{
			printf("%c", str[k]);
		}
		printf("\n");
	}
	getch();
}
