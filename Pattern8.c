#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, s, n;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	i = n;
	while(i >= 1)
	{
		s = 1;
		while(s < i)
		{
			printf(" ");
			s++;
		}
		j = n;
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
