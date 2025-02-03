#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i, max;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	max = n[0];
	for(i = 0; i < 10; i++)
	{
		if(n[i] > max)
		{
			max = n[i];
		}
	}
	printf("\n Greatest number = %d", max);
	getch();
}
