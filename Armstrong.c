#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, n, s, res, t;
	
	printf("\n Enter a first number : ");
	scanf("%d", &n);
	t = n;
	
	while(n > 0)
	{
		s = n % 10;
		res = res + s * s * s;
		n = n / 10;
	}
	if(res == t)
	{
		printf("\n This is a armstrong number");
	}
	else
	{
		printf("\n This is not a armstrong number");
	}
	getch();
}
