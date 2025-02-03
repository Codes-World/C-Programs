// Accept a number from a user and check it is divided by 5 or not. if not find the next number that is divided by 5

#include<stdio.h>
#include<conio.h>
void main()
{
	int num, a, b;
	
	printf("\n Enter a number : ");
	scanf("%d", &num);
	
	if(num % 5 == 0)
	{
		printf("\n %d is divided by 5", num);
	}
	else
	{
		a = num % 5;
		b = num - a;
		b = b + 5;
		printf("\n The next number %d is divided by 5 ", b);
	}
	getch();
}
