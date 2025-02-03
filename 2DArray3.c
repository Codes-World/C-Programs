#include<stdio.h>
#include<conio.h>
void main()
{
	int ary1[3][3], ary2[3][3], i, j, ary[3][3];
	printf("\n Enter element of first matrix\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\n Enter elements in place of %d,%d = ", i, j);
			scanf("%d", &ary1[i][j]);
		}
	}
	
	printf("\n Enter element of second matrix\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\n Enter elements in place of %d,%d = ", i, j);
			scanf("%d", &ary2[i][j]);
		}
	}
	
	printf("\n Sum of two matrix\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			ary[i][j] = ary1[i][j] + ary2[i][j];
			printf("%d", ary[i][j]);
		}
		printf("\n");
	}
	getch();
}
