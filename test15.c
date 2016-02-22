#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
	int data[MAX_SIZE];
	int rear;
	int front;
} queue;

void insert (queue *q1, int info)
{
	if(q1->rear == MAX_SIZE-1) return;
	q1->data[++(q1->rear)] = info;
	if (q1->front == -1)	(q1->front)++;
}
int delete (queue *q1)
{
	int value;
	if(q1->front == -1) return;
	if(q1->front == q1->rear) {
		value = q1->data[q1->front];
		q1->rear = q1->front = -1;
		printf("Deleted data %d \n", value);
		return value;
	} else {
		value =  q1->data[q1->front++];
		printf("Deleted data %d \n", value);
		return value;
	}
}
void display(queue *q1)
{
	int i;
	if (q1->front == -1)
		return;
	else if (q1->front == q1->rear ) {
		printf("%d ", q1->data[q1->front]);
		return;
	} else {
		for(i = q1->front; i <= q1->rear; i++) {
			printf("%d ", q1->data[i]);
		}
	}
}

void main()
{
	queue q1;
	q1.front = -1;
	q1.rear = -1;
	int choice, value;
	while(1){
		printf("Queue implementation \n");
		printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice : ");
		scanf(" %d", &choice);
		switch(choice) 
		{
			case 1: printf("Enter the data to insert : ");
				scanf(" %d", &value);
				insert(&q1, value);
				break;
			case 2: delete(&q1);
				break;
			case 3: display(&q1);
				printf("\n");
				break;
			case 4: exit(0);
			default: break;

		}
	}
	
}
