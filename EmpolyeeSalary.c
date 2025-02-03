#include<stdio.h>
#include<conio.h>
void main()
{
	int empID, salary, ta, da, hra, gross, tax;
	
	printf("\n Enter Employee Id : ");
	scanf("%d", &empID);
	
	printf("\n Enter salary : ");
	scanf("%d", &salary);
	if(salary <= 0)
	{
		printf("\n Invalid salary ");
	}
	else
	{
		if(salary >= 10000 && salary <= 40000)
		{
			ta = (2 * salary)/100;
			da = (3 * salary)/100;
			hra = (2* salary)/100;
		
	/*	printf("\n 2 percent of TA = %d", ta);
		printf("\n 3 percent of DA = %d", da);
		printf("\n 2 percent of HRA = %d", hra);
	*/	
	//	gross = salary + ta + da + hra;
	//	printf("\n Gross salary = %d", gross);
		}
	
		else if(salary >= 40000 && salary <= 60000)
		{
			ta = (1 * salary)/100;
			da = (2 * salary)/100;
			hra = (3 * salary)/100;
		
	/*	printf("\n 1 percent of TA = %d", ta);
		printf("\n 2 percent of DA = %d", da);
		printf("\n 3 percent of HRA = %d", hra);
	*/	
	//	gross = salary + ta + da + hra;
	//	printf("\n Gross salary = %d", gross);
		}
	
		else if(salary > 60000)
		{
			ta = (0 * salary)/100;
			da = (0 * salary)/100;
			hra = (0 * salary)/100;
		
	/*	printf("\n 0 percent of TA = %d", ta);
		printf("\n 0 percent of DA = %d", da);
		printf("\n 0 percent of HRA = %d", hra);*/
		}
	
		gross = salary + ta + da + hra;
//	printf("\n\n Gross salary = %d", gross);
	
		if(gross >= 50000 && gross <= 70000)
		{
			tax = (2 * gross)/100;
	//	printf("\n\n 2 percent of tax = %d", tax);
		}	
	
		else if(gross > 70000)
		{
			tax = (3 * gross)/100;
	//	printf("\n\n 3 percent of tax = %d", tax);
		}
		
		printf("\n TA = %d", ta);
		printf("\n DA = %d", da);
		printf("\n HRA = %d", hra);
		printf("\n Gross Salary = %d", gross);
		printf("\n Tax net payment = %d", (salary - tax));
	}
	
	
//	printf("\n\n Employee Id = %d", empID);
//	printf("\n Salary = %d", salary);
	
	
	getch();
}
