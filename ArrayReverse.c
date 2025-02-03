#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	for(i = 9; i >= 0; i--)
	{
		printf("\n Reverse number = %d", n[i]);
	}
	getch();
}
