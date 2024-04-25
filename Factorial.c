// Calculate Factorial of any number (Factorial Program), Date: 23-09-2023

#include<stdio.h>
void main()
{
	//Declare variables 
	int factorial, n, i = 1;
	
	//Print the message and take input as a number from user..
	printf("Enter an integer number: ");
	scanf("%d", &n);
	
	//Check that number is less than zero or not...
	if(n < 0){
		printf("Factorial is not defined for negative number");
	}
	else{
		//Initialize the value of variable 'factorial'...
		factorial = 1;
		while(i <= n){
			
			//Calculate the factorial..
			factorial = factorial * i;
			i++;
		}
		//Finally print the factorial..
		printf("Factorial of %d = %d", n, factorial);
	}
	
}
