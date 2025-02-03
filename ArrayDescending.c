#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i, j, temp;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	
	for(i = 0; i <= 9; i++)
	{
		for(j = i + 1; j <= 9; j++)
		{
			if(n[i] < n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	
	printf("\n Descending Order = ");
	
	for(i = 0; i <= 9; i++)
	{
		printf("%d ", n[i]);
	}
	getch();
}
