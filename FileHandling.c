#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fptr;
	
	int id;
	char name[50];
	float sal;
	
	fptr = fopen("emp.text", "a"); // Append(a) means write new data on this file if any data available in file so just add this data
	if(fptr == NULL)
	{
		printf("\n File does not exist");
		return;
	}
	
	printf("\n Enter a employee id: ");
	scanf("%d", &id);
	
	printf("\n Enter employee name: ");
	scanf("%s", name);
	
	printf("\n Enter emlopyee's salary: ");
	scanf("%f", &sal);
	
	fprintf(fptr, "Employee's Id = %d\n", id);
	fprintf(fptr, "Employee's Name = %s\n", name);
	fprintf(fptr, "Employee's Salary = %f\n", sal);
	
	fclose(fptr);
//	getch();
}
