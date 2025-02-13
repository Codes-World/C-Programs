#include<stdio.h>
#include<stdlib.h>
void main(){
	char ch;
	FILE *fp;
	fp = fopen("f1.txt","r");
	if(fp == NULL){
		printf("File doesn't exit");
		exit(1);
	}
	do{
		ch = fgetc(fp);
		printf("%c",ch);
	}while(!feof(fp));
	fclose(fp);
}
