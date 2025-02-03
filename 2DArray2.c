#include<stdio.h>
#include<conio.h>
void main()
{
	int ary[3][3], i, j, ary1[3][3];
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\n Enter elements inplace of %d,%d :",i, j);
			scanf("%d", &ary[i][j]);
			ary1[j][i] = ary[i][j];
		}
	}
	printf("\n After Transpose\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			//ary1[j][i] = ary[i][j];
			printf("%d", ary1[i][j]);
		}
		printf("\n");
	}
	getch();
}
