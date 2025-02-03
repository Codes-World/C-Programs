#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 1, n, rem, res = 0;
	
	while(i <= 155)
	{
		n = i;
		rem = i % 10;
		res = res + rem * rem * rem;
		i = i / 10;
		
		if(res == n)
		{
			printf("\n %d is a armstrong number", res);
		}
		else
		{
			printf("\n %d is not a armstrong number", res);
		}
		i++;
	}
}
