#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], sum = 0, i, sum_even = 0;
	int sum_odd = 0, sum_posi = 0, sum_neg = 0;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number: ");
		scanf("%d", &n[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		if(n[i] % 2 == 0)
		{
			sum_even = sum_even + n[i];
		}
		else
		{
			sum_odd = sum_odd + n[i];
		}
		
		if(n[i] % 2 == 0 && n[i] > 0)
		{
			sum_posi = sum_posi + n[i];
		}
		
		if(n[i] % 2 != 0 && n[i] < 0)
		{
			sum_neg = sum_neg + n[i];
		}
		sum = sum + n[i];
	}
	
	printf("\n Sum of even number is %d", sum_even);
	printf("\n Sum of odd number is %d", sum_odd);
	printf("\n Sum of positive even number is %d", sum_posi);
	printf("\n Sum of negative odd number is %d", sum_neg);
	printf("\n Sum of all number is %d", sum);
}
