#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i = 1, s = 0;
	
	while(i <= 10)
	{
		printf("\n Enter a number: ");
		scanf("%d", &n);
		
		if(n % 2 != 0)
		{
			s = s + n;
		}
		i++;
	}
	printf("\n Sum of odd number is  %d",s);
}
