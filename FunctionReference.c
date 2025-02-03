#include<stdio.h>
#include<conio.h>
void input(int *p, int *q)
{
	(*p)++;
	(*q)++;
	
	printf("\n Sum = %d", (*p) + (*q));
}

void main()
{
	int k, m;
	
	printf("\n Enter two numbers: ");
	scanf("%d%d", &k, &m);
	
	printf("\n Sum = %d", (k+m));
	
	input(&k, &m);
	
	printf("\n Sum = %d", (k+m));
	getch();
}
