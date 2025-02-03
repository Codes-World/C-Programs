 #include<stdio.h>
 #include<conio.h>
 
 int main()
 {
 	int n;
 	
 	printf("\n Enter a number : ");
 	scanf("%d", &n);
 	
 	if(n >= 0 && n%2 == 0)
 	{
 		printf("%d is a positive even number",n);
	}
	else
	{
		printf("%d is not a positive even number",n);
	}
 }
