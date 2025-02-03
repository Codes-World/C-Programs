#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, x = 1, y, s;
	
	for(i = 1, s = 4; i <= 4 && s >= 1; i++, s--)
	{
		for(j = 1; j < s; j++)
		{
			printf(" ");
		}
		y = 1;
		for(j = 4; j >= s; j--)
		{
			printf("%d", y);
			y++;
		}
		for(j = i; j < x+i; j++)
		{
			printf("%d", j);
		} 
		x++;
		printf("\n");
	}
}
