#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	
	printf("\n Enter a number : ");
	scanf("%d", &num);
	
	if(num % 2 == 0 && num < 0)
	{
		printf("\n %d is even negative number", num);
	}
	else
	{
		printf("\n %d is not a even negative number", num);
	}
	
	if(num % 2 == 0 && num > 0)
	{
		printf("\n %d is a positive even number", num);
	}
	else
	{
		printf("\n %d is not a positive even number", num);
	}
	
	if(num < 0)
	{
		printf("\n %d is a negative number", num);
	}
	else
	{
		printf("\n %d is not a negative number", num);
	}
	
	if(num > 0)
	{
		printf("\n %d is positive number", num);
	}
	else
	{
		printf("\n %d is not a positive number", num);
	}
	
	getch();
}
