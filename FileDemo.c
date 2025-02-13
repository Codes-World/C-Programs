#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
	FILE *fp;
	int i;
	char str[100];
	fp = fopen("f1.txt","r+");
	
	if(fp == NULL){
		printf("f1.txt name file doesn't exits!\n");
		exit(1);
	}
	printf("Enter a string: ");
	gets(str);
	
	for(i = 0; i < strlen(str); i++){
		fputc(str[i], fp);
	}
	fclose(fp);
}
