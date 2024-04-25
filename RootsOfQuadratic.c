#include<stdio.h>
#include<math.h>
void main(){
	//Declare variables of integer and float type
	int a, b, c, d;
	float r1, r2;
	
	//Take the value of a, b and c from user.
	printf("Enter the value of a, b and c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	//Calculate discriminant
	d = (b * b) - 4 * a * c;
	
	//Check the discriminant from the given condition
	if(d == 0){
		printf("The roots will be real and equal.\n");
		r1 = -b/(2*a);
		printf("The root's value are %.2f", r1);
	}
	else if(d > 0){
		printf("The roots will be real and different.\n");
		r1 = (-b + sqrt(d))/(2 * a);
		r2 = (-b - sqrt(d))/(2 * a);
		
//		printf("The first root's value is %.2f.\n", r1);
//		printf("The second root's value is %.2f.", r2);
		printf("Root1 = %.2f, Root2 = %.2f.\n", r1, r2);
	}
	
	else{
		printf("The roots will be imaginary.\n");
	}
}
