#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, n, s, j, k;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	while(i <= n)
	{
		j = 1;
		while(j <= i)
		{
			printf("%d", j);
			j++;
		}
		s = n;
		while(s > i)
		{
			printf(" ");
			s--;
		}
		s = n - 1;
		while(s > i)
		{
			printf(" ");
			s--;
		}
		if(i == n)
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
		printf("\n");
		i++;
	}
}
