#include<stdio.h>
#include<conio.h>

void input()
{
	int x, y;
	printf("\n Enter two numbers: ");
	scanf("%d%d", &x, &y);
	
	printf("\n Sum = %d", (x+y));
}

void accept(int x, int y)
{
	printf("\n Sum = %d", (x+y));
} 

int display(int x, int y)
{
	return (x+y);
}

int disp()
{
	int a, b;
	printf("\n Enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	return (a+b);
}

void main()
{
	int x;
	
	input();
	x = display(40, 80);
	
	printf("\n %d", x);
	x = disp();
	
	printf("\n %d", x);
	
	getch();
}
