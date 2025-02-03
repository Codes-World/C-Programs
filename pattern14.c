#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, s, n;
	
	printf("\n Enter a number: ");
	scanf("%d", &n);
	
	i = 0;
	while(i <= n)
	{
		s = n;
		while(s > i)
		{
			printf(" ");
			s--;
		}
		j = i;
		while(j >= 0)
		{
			printf("%d", j);
			j--;
		}
		j = 1;
		while(j <= i)
		{
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
} 
