#include<stdio.h>
#include<conio.h>
void main()
{
	int fixed_num1 = 0, fixed_num2 = 1, fabonacci_series, range;
	int outerLoop;
	printf("Enter the range of fabonacci series: ");
	scanf("%d", &range);
	
	for(outerLoop = 1; outerLoop <= range; outerLoop++){
		printf("%d", fixed_num1);
		
		fabonacci_series = fixed_num1 + fixed_num2;
		fixed_num1 = fixed_num2;
		fixed_num2 = fabonacci_series;
	}
}
