#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 4, j, s;
	
	
	while(i >= 1)
	{
		s = 4;
		while(s > i)
		{
			printf(" ");
			s--;
		}
		j = i ;
		while(j >= 1)
		{
			printf("%d", j);
			j--;
		}
		printf("\n");
		i--;
	}
	getch();
}
