#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	getch();
}
