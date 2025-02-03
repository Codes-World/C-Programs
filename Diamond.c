#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, j, s, k;
	
	while(i <= 7)
	{
		if(i <= 7/2)
		{
			j = 1;
			while(j <= i)
			{
				printf("%d", j);
				j++;
			}
			s = 7/2;
			while(s > i)
			{
				printf(" ");
				s--;
			}
			s = (7/2) - 1;
			while(s > i)
			{
				printf(" ");
				s--;
			}
			if(i == 7/2)
			{
				k = i - 1;
				while(k >= 1)
				{
					printf("%d", k);
					k--;
				}
			}
			else
			{
				k = i;
				while(k >= 1)
				{
					printf("%d", k);
					k--;
				}
			}
		}
		printf("\n");
		i++;
	}
}
