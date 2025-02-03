#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	
	printf("\n\nDisplay Only Even Number\n");
	for(i = 0; i < 10; i++)
	{
		if(n[i] % 2 == 0)
		{
			printf("\n Even number : %d", n[i]);
		}
	}
	getch();
}
