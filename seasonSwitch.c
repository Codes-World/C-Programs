#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	
	printf("\n Enter month :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 11:
		case 12:
		case 1:
		case 2:
			printf("\n Winter Season");
			break;
			
		case 3:
		case 4:
		case 5:
		case 6:
			printf("\n Summer Season");
			break;
			
		case 7:
		case 8:
		case 9:
		case 10:
			printf("\n Rainy Season");
			break;
			
		default:
			printf("\n Please enter valid month");
	}
}
