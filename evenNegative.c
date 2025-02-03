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
	getch();
}
