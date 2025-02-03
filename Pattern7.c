#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, j, s, n;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	while(i <= n)
	{
		s = n;
		while(s > i)
		{
			printf(" ");
			s--;
		}
		j = i;
		while(j >= 1)
		{
			printf("%d", j);
			j--;
		}
		printf("\n");
		i++;
	}
	getch();
}
