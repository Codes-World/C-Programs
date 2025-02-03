#include<stdio.h>
#include<conio.h>

main()
{
	int x, y, swap;
	
	printf("\n Enter first number : ");
	scanf("%d",&x);
	
	printf("\n Enter second number : ");
	scanf("%d",&y);
	
/*	swap = x;
	x = y;
	y = swap;
*/
	x = x + y;
	y = x - y;
	x = x - y;	
	printf("\n After Swap\n");
	
	printf("\n The value of x is %d", x);
	printf("\n The value of y is %d", y);
}
