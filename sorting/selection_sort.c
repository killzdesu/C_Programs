// C language implementation of Selection sort 
#include <stdio.h> 
void swap(int *A, int *B) 
{ 
	int tmp = *A; 
	*A = *B; 
	*B = tmp; 
} 

void SelectionSort(int arr[], int n) 
{ 
  int i, j; 
  for (i = 0; i < n; i++)	 
    // Select the i-th lowest element
    for (j = i+1; j < n; j++) { 
      if (arr[i] > arr[j]) 
        // Swap it to the i-th position
        swap(&arr[i], &arr[j]); 
    }
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int arr[] = {24, 22, 10, 48, 3, 15, 34}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	SelectionSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 

