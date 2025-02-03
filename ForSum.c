#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, sum = 0;
	
	for(i = 1; i <= 5; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n);
		
		sum = sum + n;
	}
	printf("\n Sum = %d", sum);
}
