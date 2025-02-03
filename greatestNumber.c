#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, d;
	
	printf("\n Enter four number : ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if(a > b && a > c && a > d)
	{
		printf("\n %d is a greatest number", a);
	}
	
	else if(b > a && b > c && b > d)
	{
		printf("\n %d is a greatest number", b);
	}
	
	else if(c > a && c > b && c > d)
	{
		printf("\n %d is a greatest number", c);
	}
	
	else
	{
		printf("\n %d is a greatest number", d);
	}
	
	getch();
}
