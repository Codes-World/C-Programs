#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 4, j;
	
	while(i >= 1)
	{
		j = 4;
		while(j >= i)
		{
			printf("%d", j);
			j--;
		}
		printf("\n");
		i--;
	}
	getch();
}
