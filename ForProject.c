#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k, sp;
	k = 9;
	for(i = 20; i > 0; i--)
	{
		if(i >= 15)
		{
			for(sp = i; sp >= 15; sp--)
			{
				printf(" ");
			}
			
			for(j = 0; j < k; j++)
			{
				printf("*");
			}
			k = k + 2;
		}
		else
		{
			for(j = 0; j < k; j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	getch();
}
