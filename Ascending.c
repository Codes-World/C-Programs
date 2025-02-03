#include<stdio.h>
#include<conio.h>
void main()
{
	int n[5], i, s;
	
	for(i = 0; i < 6; i++)
	{
		printf("\n Enter a number: ");
		scanf("%d", &n[i]);
	}
	
	for(i = 0; i < 6; i++)
	{
		if(s > n[i])
		{
			s = n[i];
		}
		printf("%d ", s);
	}
}
