#include<stdio.h>
#include<conio.h>
void main()
{
	int n, s = 0, i = 1;
	
	printf("\n Enter a number : ");
	scanf("%d",&n);
	
	while(i <= n)
	{
		if(i%2==0)
		{
			s = s + i;
		}
		i++;
	}
	printf("\n Sum = %d",s);
	getch();
}
