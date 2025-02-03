#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[50], str2[50], str3[100];
	int l, k;
	
	printf("\n Enter the first string: ");
	gets(str1);
	
	printf("\n Enter the second string: ");
	gets(str2);
	
	//Copy the string
	printf("\n Copy Function");
	strcpy(str3, str1);
	printf("\n After copy = %s", str3);
	
	printf("\n Concatenate Function\n");
	strcat(str3, str2);
	printf("\n After concatenate = %s", str3);
	
	printf("\n Strlen Function\n");
	l = strlen(str3);
	printf("\n After number of length = %d", l);
	
	printf("\n Upper Function\n");
	strupr(str3);
	printf("\n Change Upper Case = %s", str3);
	
	printf("\n Lower Function\n");
	strlwr(str3);
	printf("\n Change lower Case = %s", str3);
	
	printf("\n Comparison Function\n");
	k = strcmp(str3, str2);
	if(k == 0)
	{
		printf("\n Both are equal");
	}
	else if(k > 0)
	{
		printf("\n %s is greatest", str3);
	}
	else
	{
		printf("\n %s is greatest", str2);
	}
}
