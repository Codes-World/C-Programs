#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, m, l, k, n;
	
	printf("\n Enter a number: ");
	scanf("%d", &n);
	
	m = 2;
	k = 1;
	
	for(i = 1; i <= n; i++)
	{
		l = k;
		for(j = i; j >= 1; j--)
		{
			printf("%d", l);
			l--;
		}
		k = k + m;
		m++;
		printf("\n");
	}
	getch();
}
