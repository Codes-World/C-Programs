#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, sum = 0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n);
		
		if(n % 2 == 0)
		{
			sum = sum + n;
		}
	}
	printf("\n Sum of even number is %d", sum);
}
