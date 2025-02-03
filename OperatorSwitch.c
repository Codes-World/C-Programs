#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, sum, sub, multi;
	float div;
	char choice;
	
	printf("\n Enter first number : ");
	scanf("%d", &num1);
	
	printf("\n Enter second number : ");
	scanf("%d", &num2);
	
	printf("\n Enter operator waht you want like /, +, -, * : ");
	scanf("\n%c", &choice);
	
	switch(choice)
	{
		case '+':
			sum = num1 + num2;
			printf("\n Addition of two number = %d", sum);
			break;
			
		case '-':
			sub = num1 - num2;
			printf("\n Subtraction of two number = %d", sub);
			break;
			
		case '*':
			multi = num1 * num2;
			printf("\n Multiply two number = %d", multi);
			break;
			
		case '/':
			div = num1 / num2;
			printf("\n Division of two number = %.2f", div);
			break;
			
		default:
			printf("\nPlease enter valid operator");
	}
}
