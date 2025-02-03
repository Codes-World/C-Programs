#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i, n1;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	
	printf("\n Enter a number for check the position of number : ");
	scanf("%d", &n1);
	
	for(i = 0; i < 10; i++)
	{
		if(n1 == n[i])
		{
			printf("\n Position of %d is %d", n1, i+1);
		}
	}
	getch();
}
