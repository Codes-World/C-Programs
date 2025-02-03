#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 4, x = 4, j;
	
	while(i >= 1)
	{
		j = 1;
		while(j <= i)
		{
			printf("%d", x);
			j++;
		}
		printf("\n");
		x--;
		i--;
	}
}
