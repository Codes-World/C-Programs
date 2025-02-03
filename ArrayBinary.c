#include<stdio.h>
#include<conio.h>
void main()
{
	int ary[10], i, n;
	
	printf("\n Enter a number: ");
	scanf("%d", &n);
	
	for(i = 0; n > 0; i++, n/=2)
	{
		ary[i] = n % 2;
	}
	printf("\nConvert into Binary form = ");
	for(--i; i >= 0; i--)
	{
		printf("%d", ary[i]);
	}
	getch();
}
