#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i, n1, f;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		n1 = 1;
		for(f = 1; f <= n[i]; f++)
		{
			n1 = n1 * f;
		}
		printf("\n Factorial of %d is %d", n[i], n1);
	}
	getch();
}
