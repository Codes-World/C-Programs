#include<stdio.h>
#include<conio.h>
void main()
{
	int ary[3][3], i, j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\n Enter elements in place of %d%d = ", i,j);
			scanf("%d", &ary[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d", ary[i][j]);
		}
		printf("\n");
	}
	getch();
}
