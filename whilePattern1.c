#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp, k;
	
	i = 1;
	while(i<=4)
	{
		sp = 4;
		while(sp > i)
		{
			printf(" ");
			sp--;
		}
		j = i;
		while(j >= 1)
		{
			printf("%d",j);
			j--;
		}
		k = 2;
		while(k <= i)
		{
			printf("%d", k);
			k++;
		}
		printf("\n");
		i++;
	}
	getch();
}
