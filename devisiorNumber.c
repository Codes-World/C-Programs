// Accept a number from a user and check it is divided by 5 or not. if not find the next number that is divided by 5

#include<stdio.h>
#include<conio.h>
void main()
{
	int num, a, b, div;
	
	printf("\n Enter a number : ");
	scanf("%d", &num);
	
	printf("\n Enter divisior number: ");
	scanf("%d", &div);
	
	if(num % div== 0)
	{
		printf("\n %d is divided by %d", num, div);
	}
	else
	{
		a = num % div;
		b = num - a;
		b = b + div;
		printf("\n The next number %d is divided by %d ", b, div);
	}
	getch();
}
