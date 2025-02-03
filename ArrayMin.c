#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i, min;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	min = n[0];
	for(i = 0; i < 10; i++)
	{
		if(n[i] < min)
		{
			min = n[i];
		}
	}
	printf("\n Lowest number = %d", min);
	getch();
}
