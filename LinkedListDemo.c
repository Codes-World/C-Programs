#include<stdio.h>
#include<stdlib.h>

struct node{
	int item;
	struct node *next;
};

//Insert element in linked list at beginning position
void insertAtBeginning(struct node **s, int data){
	struct node *n;
	
	n = (struct node*)malloc(sizeof(struct node));
	n->item = data;
	
	if(n == NULL){}
	else{
		n->next = *s;
		*s = n;
	}
	
}

//Insert element in linked list at specific position
void insertAtSpecificPosition(struct node **s, int data, int index){
	struct node *n, *t;
	
	if(index < 1){
		printf("Invalid Position\n");
	}
	else{
		n = (struct node*)malloc(sizeof(struct node));
		n->item = data;
	
		t = *s;
		int i = 0;
		while(i != index-1){
			t = t->next;
			i++;
		}
		n->next = t->next;
		t->next = n;
	}
	
}

//Insert element in linked list at last position
void insertAtLast(struct node **s, int data){
	struct node *n, *t;
	
	n = (struct node*)malloc(sizeof(struct node));
	n->item = data;
	n->next = NULL;
	
	if(*s == NULL){
		*s = n;
	}
	else{
		t = *s;
		while(t->next != NULL){
			t = t->next;
		}
		t->next = n;
	}
}

//Delete elements from the first place
void deletionAtBeginning(struct node **s){
	struct node *temp;
	if(*s != NULL){
		temp = *s;
		*s = temp->next;
		free(temp);
	}
}

//Delete element from the last place
void deletionAtLast(struct node **s){
	struct node *prev, *del;
	
	if(*s == NULL){
		printf("Linked List empty");
	}
	else{
		del = *s;
		while(del->next != NULL){
			prev = del;
			del = del->next;
		}
		prev->next = NULL;
		free(del);
	}
}


void display(struct node *s){
	while(s){
		printf("%d ",s->item);
		s = s->next;
	}
}

int main(){
	struct node *start = NULL;
//	insertAtSpecificPosition(&start, 1000, 2);
	insertAtBeginning(&start, 23);
	insertAtBeginning(&start, 24);
	insertAtBeginning(&start, 42);
	insertAtBeginning(&start, 100);
	insertAtLast(&start, 100);
	insertAtSpecificPosition(&start, 1000, 3);
	deletionAtLast(&start);
	deletionAtBeginning(&start);
	display(start);
}
