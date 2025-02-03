#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, t;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	for(i = 1; i <= 10; i++)
	{
		t = n * i;
		printf("\n %d * %d = %d", n, i, t);
	}
}
