#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, f = 1;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		f = f * i;
	}
	printf("\n Factorial of %d is %d", n, f);
}
