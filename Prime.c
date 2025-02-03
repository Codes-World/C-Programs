#include<stdio.h>
#include<conio.h>
void main()
{
	int count = 0, number, i = 1;
	
	printf("\n Enter a number : ");
	scanf("%d", &number);
	
	while(i <= number)
	{
		if(number%i == 0)
		{
			count++;
		}
		i++;
	}
	if(count == 2)
	{
		printf("%d is a prime number",number);
	}
	else
	{
		printf("%d is not a prime number", number);
	}
}
