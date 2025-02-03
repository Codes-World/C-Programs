#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, count = 0;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("\n %d is a prime number", n);
	}
	else
	{
		printf("\n %d is not a prime number", n);
	}
	getch();
}
