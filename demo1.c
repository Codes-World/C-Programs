#include<stdio.h>
#include<conio.h>
void main()
{
	int num, count = 0;
	
	printf("\n Enter a number : ");
	scanf("%d", &num);
	
	while(num>0)
	{
	//	num = num % 10;
	//	res = res + num;
		count++;
		num = num/10;
	}
	printf("%d",count);
}
