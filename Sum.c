/* WAP to calculate arithmetic calculations using do...while loop..*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int firstNumber, secondNumber, choice;
	
	do{
		printf("******As per your choice what would you like to perform arithmetic operations*****");
		printf("\n1. Addition \n2. Substraction \n3. Division \n4. Modulus \n5. Exit for 0");
		
		printf("\nPlease enter your choice: ");
		scanf("%d",&choice);
		
		//If you want to exit from the program so give input 0...
		if(choice == 0){
			exit(0);
		}
		else{
			
			//Get input from user to perform any types of arithmetic calculations as per your choice..
			printf("\nEnter two numbers for perform Arithmetic Operations: ");
			scanf("%d %d", &firstNumber, &secondNumber);
		
			switch(choice){
				case 1:
					printf("Sum of two numbers are %d\n",firstNumber + secondNumber);
					break;
				
				case 2:
					printf("Substraction of two numbers are %d\n",firstNumber - secondNumber);
					break;
			
				case 3:
					printf("Division of two numbers are %d\n",firstNumber / secondNumber);
					break;
				
				case 4:
					printf("Modulus of two numbers are %d\n",firstNumber % secondNumber);
					break;
				
				default:
					printf("Invalid Choice");
			}		
		}
	}while(choice > 0);  //Check condition if true, run continuously otherwise terminate the program...
	
}
