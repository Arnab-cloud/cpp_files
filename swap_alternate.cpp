#include <iostream>
#include "arrayFunctions.h"

void swap_alternate(int arr[], int size)
{
	for(int i=0; i<size-1; i += 2)
		std::swap(arr[i], arr[i+1]);
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The array is now\n");
	printArray(arr,size);
	
	swap_alternate(arr,size);
	printf("The new array is: \n");
	printArray(arr,size);
	
	return 0;
}
