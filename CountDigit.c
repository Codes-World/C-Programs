#include<stdio.h>
#include<conio.h>
void main()
{
	int count = 0, n;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	while(n > 0)
	{
		n = n / 10;
		count++;
	}
	if(count == 1)
	{
		printf("\n There is %d digit in this number", count);
	}
	else
	{
		printf("\n There are %d digit in this number", count);
	}
	getch();
}
