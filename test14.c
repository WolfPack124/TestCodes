#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
	int data[MAX_SIZE];
	int top;
} stack;

void push(stack *s1, int info)
{
	printf("In %s now info is %d \n", __FUNCTION__, info);

	if(s1->top >= MAX_SIZE - 1)		return;
	
	s1->data[++s1->top] = info;
}

int pop(stack *s1)
{
	if (s1->top == -1) 	return -1;
	
	return s1->data[s1->top--];	

}

void display(stack *s1)
{
	int i;
	if (s1->top == -1) 	return;

	for(i = 0; i <= (s1->top); i++)
		printf("%d ", s1->data[i]);
}
void main()
{
	stack s1;
	s1.top = -1;
	int choice, info = 10, value;
	printf("Stack implementation\n");
	while(1) 
	{
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("Enter your choice : ");
		scanf(" %d", &choice);
		printf ("\nEntered choice is %d\n", choice);
		switch(choice) 
		{
			case 1: printf("Enter value to push to stack : ");
				scanf(" %d", &info);
				push(&s1, info); 
				break;
			case 2: value = pop(&s1);
				printf("Value %d is taken from stack\n", value);
				break;
			case 3: display(&s1);
				printf("\n");
				break;
			case 4: 
				exit(0);
			default :
				break;	
		}
	}
}
