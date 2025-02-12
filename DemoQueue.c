#include<stdio.h>
#include<stdlib.h>

struct queue{
	int size, frontEnd, rearEnd;
	int *array;
};

int isFull(struct queue *ptr){
	if(ptr->rearEnd = ptr->size-1){
		return 1;
	}
	return 0;
}

void enqueue(struct queue **ptrQ, int data){
	struct queue *t;
	t = *ptrQ;
	if(isFull(t)){
		printf("Queue is Full! You cannot insert element.\n");
	}
	else{
		if(t->frontEnd == -1){
			t->frontEnd = t->rearEnd = 0;
			t->array[t->rearEnd] = data;
		}
		else{
			t->rearEnd++;
			t->array[t->rearEnd] = data;
		}
	}
}

void displayQueue(struct queue *ptr){
	while(ptr->array[ptr->frontEnd] != ptr->array[ptr->rearEnd]){
		printf("%d",ptr->array[ptr->frontEnd]);
		ptr->frontEnd++;
	}
}

void main(){
	struct queue *q;
	q->size = 5;
	q->frontEnd = q->rearEnd = -1;
	q->array = (int*)malloc(q->size * sizeof(int));
	enqueue(&q, 20);
	displayQueue(q);
}
