#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *array;
};

int isFull(struct stack *ptr){
	if(ptr->top == ptr->size-1){
		return 1;
	}
	return 0;
}

int isEmpty(struct stack *ptr){
	if(ptr->top == -1){
		return 1;
	}
	return 0;
}

void push(struct stack *ptr, int value){
	if(isFull(ptr)){
		printf("Stack Overflow! Cannot Push %d element in the stack\n",value);
	}
	else{
		ptr->top++;
		ptr->array[ptr->top] = value;
		printf("The element %d is successfully push into the stack.\n",ptr->array[ptr->top]);
	}
}

int pop(struct stack *ptr){
	int x;
	if(isEmpty(ptr)){
		printf("\nStack Underflow! Mean Stack is empty.\n");
		return;
	}
	else{
		x = ptr->array[ptr->top];
		ptr->top = ptr->top-1;
		printf("The element %d is successfully pop into the stack.\n",x);
		return;
	}
}

void displayStack(struct stack *ptr){
//	struct stack *x;
	int y;
	y = ptr->top;
	printf("%d\n",y);
	while(ptr->top != -1){
		printf("%d->",ptr->array[ptr->top]);
		ptr->top--;
	}
//	printf("\n%d",ptr->top);
	ptr->top=y;
}

void main(){
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->array = (int*)malloc(s->size * sizeof(int));
	
	push(s, 4);
	push(s, 6);
	push(s, 5);
	push(s, 2);
	displayStack(s);
	pop(s);
	pop(s);
	displayStack(s);
	
}
