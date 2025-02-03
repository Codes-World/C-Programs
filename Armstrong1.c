#include<stdio.h>
#include<conio.h>
void main()
{
	int num, pnum, s = 0, r, i, k, ctr = 0;
	
	printf("\n Enter a number: ");
	scanf("%d", &num);
	
	pnum = num;
	while(pnum > 0)
	{
		ctr++;
		pnum = pnum / 10;
	}
	pnum = num;
	while(pnum > 0)
	{
		r = pnum % 10;
		i = 1; 
		k = 1;
		while(i <= ctr)
		{
			k = k * r;
			i++;
		}
		s = s + k;
		pnum = pnum / 10;
	}
	
	if(s == num)
	{
		printf("\n Armstrong");
	}
	else
	{
		printf("\n Not Armstrong");
	}
	getch();
}
