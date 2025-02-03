#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, j, n;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	while(i <= n)
	{
		j = i;
		while(j >= 1)
		{
			if(j % 2 == 0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
			j--;
		}
		printf("\n");
		i++;
	}
	getch();
}
