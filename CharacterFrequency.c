#include<stdio.h>
void main()
{
	int n, i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	char str[n], count = 0;
	
	printf("Enter aa string: ");
	scanf("%s",&str);
	
	for(i = 0; str[i]; i++){
		count++;
	}
	for(i = 0; i < count; i++){
		printf("The character is '%c' in a string and their frequency is %d\n", str[i], i);
	}
}
