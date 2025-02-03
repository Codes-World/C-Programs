#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp, n;
	
	printf("\n Enter a number greater than 10 or equal to 10: ");
	scanf("%d", &n);
	k = n -(n/2);
	for(i = n; i >= 1; i--)
	{	
		for(sp = 1; sp < k; sp++)
		{
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
