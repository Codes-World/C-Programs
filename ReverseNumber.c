#include<stdio.h>
#include<conio.h>
void main()
{
	int reverse = 0, num;
	
	printf("\n Enter a number: ");
	scanf("%d", &num);
	
	while(num > 0)
	{
		reverse = reverse * 10;
		reverse = reverse + num%10;
		num = num / 10;
	}
	
	printf("\n Reverse number = %d ", reverse);
}
