#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10], i, n1, temp = 0;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number : ");
		scanf("%d", &n[i]);
	}
	
	printf("\n Enter a number for exist this number in the array or not : ");
	scanf("%d", &n1);
	
	for(i = 0; i < 10; i++)
	{
		if(n1 == n[i])
		{
			i = 10;
			temp = 1;
		}
	}
	
	if(temp == 1)
	{
		printf("\n %d is available in the array", n1);
	}
	else
	{
		printf("\n %d is not available in the array", n1);
	}
	getch();
}
