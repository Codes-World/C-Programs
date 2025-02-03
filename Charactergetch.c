#include<stdio.h>
#include<conio.h>
void main()
{
	int c1; // Because here fetch the character in ASCII value
	char c;
	
	printf("\n Enter a character: ");
	c = getch();
	printf("\n Character = %c", c);
	printf("\n Enter a character: ");
	c1 = getche();
	printf("\n Character = %d", c1);
	getch();
}
