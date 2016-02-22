#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void merge(int A[], int min, int mid, int max)
{
	int i, j, k, l;
	int temp[SIZE];
	j = min;
	k = mid + 1;
	for(i = min; j <= mid && k <= max; i++) {
		if(A[j] < A[k]) 
			temp[i] = A[j++];
		else 
			temp[i] = A[k++];
	}
	if(k >  mid)
		for(j ; j <= mid; j++)
			temp[i++] = A[j];
	
	else
		for(k ; k <= max; k++)
			temp[i++] = A[k];

	printf("The list temp is ");
	for(i = 0; i < SIZE; i++)
                printf("%d ", temp[i]);
	printf("\n");
	printf("The list A is ");
	for(i = 0; i < SIZE; i++)
                printf("%d ", A[i]);
	printf("\n");

	for(l = 0; l < SIZE; l++)
		A[l] = temp[l];
}

void partition(int A[], int min, int max)
{
	int i;
	printf("The list A is ");
	for(i = 0; i < SIZE; i++)
                printf("%d ", A[i]);
	printf("\n");
	int mid = (min+max)/2;
	if (min < max) {
		partition(A, min, mid);
		partition(A, mid+1, max);
		merge(A, min, mid, max);
	}
}

void main()
{
	int i;
	int A[SIZE] = {12,15,18,11,14,16,13,19,10,17};
	printf("The unsorted list is ");
	for(i = 0; i < SIZE; i++)
		printf("%d ", A[i]);
	printf("\n");

	partition(A, 0, SIZE-1);
		
	printf("The sorted list is ");
	for(i = 0; i < SIZE; i++)
		printf("%d ", A[i]);
	printf("\n");
}
