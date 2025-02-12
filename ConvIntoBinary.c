#include<stdio.h>
void main(){
	//Declare  variables..
	int decimalNumber, remainder, i = 1, binaryNumber = 0;
	
	printf("****CONVERT DECIMAL INTO BINARY FORM****");
	
	//Get decimal value from user
	printf("\nEnter a decimal number: ");
	scanf("%d", &decimalNumber);
	
	while(decimalNumber != 0){
		//Find the remainder by taking the modulus of the given number with 2
		remainder = decimalNumber % 2;
		
		//Update the number by dividing it by 2
        decimalNumber /= 2;
        
        binaryNumber += remainder * i;
        i *= 10;
	}
	//Print the final result..
	printf("The binary number is %d", binaryNumber);
	
}
