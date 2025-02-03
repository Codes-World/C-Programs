#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, n, s, res;
	
	printf("\n Enter a first number : ");
	scanf("%d", &n);
	
	printf("\n Enter a second number : ");
	scanf("%d", &s);
	
	while(i <= s)
	{
		res = res * n;
		i++;
	}
	printf("\n The number of %d is %d times multiply = %d", n, s, res);
	getch();
}
