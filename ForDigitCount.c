#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i, count = 0;
	
	printf("\n Enter a number : ");
	scanf("%d", &n);
	
	for(i = n; i > 0;)
	{
		i = i / 10;
		count++;
	}
	printf("\n Number of digit is %d", count);
}
