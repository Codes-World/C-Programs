#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i, j;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number: ");
		scanf("%d", &n[i]);
		
		for(j = i; j > 0; j--)
		{
			if(n[j-1] == n[i])
			{
				printf("\n Enter your number is repeated, Please enter unique number ");
				scanf("%d", &n[i]);
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d", n[i]);
	}
}
