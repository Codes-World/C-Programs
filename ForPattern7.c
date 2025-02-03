#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, x, y = 1, n;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	x = n;
	
	for(i = n; i >= 1; i--)
	{
		for(j = 1; j < i; j++)
		{
			printf(" ");
		}
//		y = 1;
		for(j = i; j <= x; j++)
		{
			printf("%d", y);
//			y++;
		}
		y++;
		x++;
		printf("\n");
	}
	getch();
}  
