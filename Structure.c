#include<stdio.h>
#include<conio.h>
struct emp
{
	char name[50];
	int stuId;
	int class1;
};

void main()
{
	struct emp e;
	
	printf("\n Enter a name: ");
	gets(e.name);
	
	printf("\n Enter Student Id: ");
	scanf("%d", &e.stuId);
	
	printf("\n Enter Student's class no: ");
	scanf("%d", &e.class1);
	
	printf("\n Student Name = %s", e.name);
	printf("\n Student's ID = %d", e.stuId);
	printf("\n Student's Class = %d", e.class1);
	getch();
}
