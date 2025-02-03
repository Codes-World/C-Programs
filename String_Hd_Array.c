#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[50], str2[50], str3[100];
	int i;
	
	printf("\n Enter first name: ");
	gets(str1);
	
	printf("\n Enter second name: ");
	gets(str2);
	
	for(i = 0; str3 != '\0'; i++){
		printf("%c", str1[i]);
	}
	
	for(i = 0; str3 != '\0'; i++){
		printf("%c", str2[i]);
	}
	
	for(i = 0; str3 != '\o'; i++){
		str3[i] = str1[i];
		str3[i] = str2[i];
	}
	printf("\n Full name = %s", str3);
}
