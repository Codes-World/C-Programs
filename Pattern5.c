#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, j, k, x = 1;
	
	while(i <= 5)
	{
		j = i;
		while(j <= 5)
		{
			printf("%d", j);
			j++;
		}
		k = 1;
		while(k < x)
		{
			printf("%d", k);
			k++;
		}
		printf("\n");
		i++;
		x++;
	}
	getch();
}
