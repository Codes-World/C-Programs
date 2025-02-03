#include<stdio.h>
#include<conio.h>
void main()
{
	int ary[10], j, i, f;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n Enter a number: ");
		scanf("%d", &ary[i]);
		
		f = 0;
		for(j = 0; j < i; j++)
		{
			if(ary[j] == ary[i])
			{
				j = i;
				f = 1;
			}
		}
		if(f == 1)
		{
			printf("\n Already exit");
			i--;
		}
	}
	getch();
}
