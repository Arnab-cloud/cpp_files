#include <iostream>
#include "arrayFunctions.h"

void heapify(int *arr, int size, int i)
{
	int max = i;
	int left = 2*i +1, right = 2*i +2;
	if(left < size && arr[max] < arr[left])
		max = left;
	if(right < size && arr[max] < arr[right])
		max = right;
	if(max != i)
	{
	
		std::swap(arr[max], arr[i]);
		heapify(arr,size,max);
	}
}

void max_heap(int arr[], int size)
{
	for(int i=size/2-1; i>-1; i--)
		heapify(arr,size,i);	
}

int main()
{
	int arr[] = {10,20,25,6,12,15,4,16};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	// print the array
	printArray(arr, size);
	
	// heapify
	max_heap(arr,size);
	// print again
	printArray(arr,size);
	
	return 0;
}
