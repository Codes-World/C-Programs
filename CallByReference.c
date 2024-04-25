#include<stdio.h>
//Swapping two numbers using Call by reference
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b, *result;
	
	printf("Enter the value of a and b: ");
	scanf("%d %d", &a, &b);
	printf("a = %d\nb = %d", a, b);
	
	//Call by reference
	swap(&a, &b);
	printf("\n\nAfter Swap the value of a and b");
	printf("\na = %d\nb = %d", a, b);
	return 0;
}
