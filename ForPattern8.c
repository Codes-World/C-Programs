#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, x, q, n;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
//	x = n;
	
	for(i = 1; i <= n; i++)
	{
		q = i;
		x = n-1;
		for(j = i; j <= 1; j++)
		{
			printf("%d", j);
		}
		if(i >= 2)
		{
			for(j = i; j >= 1; j--)
			{
				printf("%d ", q);
				q = q + x;
				x--;
			}	
		}
		printf("\n");
	}
	getch();
}    
