#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, j;
	
	while(i <= 4)
	{
		j = 1;
		while(j <= i)
		{
			printf("%d", i);
			j++;
		}
		printf("\n");
		i++;
	}
}
