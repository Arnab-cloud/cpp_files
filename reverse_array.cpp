#include <iostream>
#include "arrayFuntions.h"


int main()
{
	int arr[] = {7,8,6,9,245,21,-5,68,36,-68,30};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	//now the array is
	printArray(arr,size);
	
	// reverse the array
	reverseArray(arr,size);
	
	// print the new array
	printArray(arr, size);
	
	return 0;
	
}
