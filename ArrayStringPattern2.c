#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k;
	char str[50];
	
	printf("\n Enter a string: ");
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++);
	for(j = i; j >= 0; j--)
	{
		for(k = j-1; k >= 0; k--)
		{
			printf("%c", str[k]);
		}
		printf("\n");
	}
	getch();
}
