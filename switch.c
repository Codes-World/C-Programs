#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	
	printf("\n Enter week number:");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("\n MONDAY");
			break;
			
		case 2:
			printf("\n TUESDAY");
			break;
			
		case 3:
			printf("\n Wednesday");
			break;
			
		case 4:
			printf("\n THURSDAY");
			break;
			
		case 5:
			printf("\n FRIDAY");
			break;
			
		case 6:
			printf("\n SATURDAY");
			break;
			
		case 7:
			printf("\n SUNDAY");
			break;
			
		default:
			printf("\n Invalid week number\n Please try again");
	}
	getch();
}
