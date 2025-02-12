#include<stdio.h>
//Swapping two numbers using Call by value
void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("\n\nAfter Swap the value of a and b");
	printf("\na = %d\nb = %d", a, b);
}

int main()
{
	int a, b;
	
	printf("Enter the value of a and b: ");
	scanf("%d %d", &a, &b);
	printf("a = %d\nb = %d", a, b);
	
	//Call by value
	swap(a, b);
	return 0;
}
