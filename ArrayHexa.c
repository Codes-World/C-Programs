#include<stdio.h>
#include<conio.h>
void main()
{
	int ary[10], i, n;
	
	printf("\n Enter a number: ");
	scanf("%d", &n);
	
	for(i = 0; n > 0; i++, n/=16)
	{
		ary[i] = n % 16;
	}
	printf("\n Change Decimal to hexadecimal\n");
	for(--i; i >= 0; i--)
	{
		switch(ary[i])
		{
			case 10:
				printf("A");
				break;
				
			case 11:
				printf("B");
				break;
				
			case 12:
				printf("C");
				break;
				
			case 13:
				printf("D");
				break;
				
			case 14:
				printf("E");
				break;
				
			case 15:
				printf("F");
				break;
				
			default:
				printf("%d", ary[i]);
		}
	}
	getch();
}
