#include<stdio.h>
#define MAX 2
int top = -1;
int stack[MAX];
void push(int x){
	if(top == MAX-1){
		printf("Stack is Full");
		return;
	}
	else{
		top++;
		stack[top] = x;
		printf("\nThe element %d is inserted in stack successfully", x);
	}
}

void pop(){
	int x;
	if(top == -1){
		printf("Stack is empty");
		return;
	}
	else{
		x = stack[top];
		top--;
		printf("\nThe element %d is deleted from stack successfully", x);
	}
}
void main(){
	int n;
	int choice;
	
	printf("Choose that which operations perform in stack");
	printf("\n1.Push Operation \n2.Pop Operarions");
	
	do{
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter a number which you want to insert in stack: ");
				scanf("%d",&n);
				push(n);
				break;
			
			case 2:
				getch();
				pop();
				break;
		}
	}while(choice < 3);
	
}
