#include <stdlib.h>
#include <stdio.h>


int partition( int A[], int low, int high)
{
    	int left, right, pivot, pivot_element, temp;

	left = pivot = low;
	right = high;
	pivot_element = A[low];
	
	while( left < right) {
		while(A[left] <= pivot_element) 		
		left++;
		while (A[right] > pivot_element)
		right--;
		if(left < right) {
			temp = A[left];
			A[left] = A[right];
			A[right] = temp; 
		}
	}
	A[low] = A[right];
	A[right] = pivot_element;
	return right;
}

void quick_sort(int A[], int low, int high)
{
     int pivot;
     if(low < high) {
	pivot = partition( A, low, high);
	quick_sort(A, low, pivot-1);
	quick_sort(A, pivot + 1, high);
     }
}
void main()
{
	int i;
	int A[10] = {13,15,18,12,10,17,14,19,11,16};
	for(i= 0 ; i< 10;i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	quick_sort(A, 0, 9);
	for(i = 0 ; i< 10;i++) {
	        printf("%d ", A[i]);
        }
	printf("\n");
}
