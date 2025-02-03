#include<stdio.h>
#include<conio.h>
void main()
{
	int n[4][4], sum = 0, i, j;
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("\n Enter element of %d,%d = ", i, j);
			scanf("%d", &n[i][j]);
			sum = sum + n[i][j];
		}
		n[i][j] = sum;
		sum = 0;
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j <= 4; j++)
		{
			printf("%d ",n[i][j]);
		}
		printf("\n");
	}
	getch();
}
