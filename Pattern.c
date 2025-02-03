#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, j; // j = 1; 
	
	while(i <= 4)
	{
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
