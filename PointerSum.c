#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, *pa = &a, *pb = &b, sum = 0, *psum = &sum;
	
	printf("\n Enter first number: ");
	scanf("%d",&a);
	
	printf("\n Enter second number: ");
	scanf("%d", &b);
	
	*psum = (*pa) + (*pb);
	
	printf("\n Sum of two number is %d", (*psum));
	getch();
}
