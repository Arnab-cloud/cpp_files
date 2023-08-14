#include <iostream>

void inputArray(int arr[], int size)
{
	std::cout << "Enter the elemennts of the array: ";
	for(int i=0; i<size; i++)
		std::cin >> arr[i];
}

void printArray(int arr[], int size)
{
	std::cout << "The array is: \n";
	for(int i=0; i<size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

int max_array(int arr[], int size)
{
	int max = arr[0];
	for(int i=0; i<size; i++)
		max = std::max(max,arr[i]);
	return max;
}

int min_array(int arr[], int size)
{
	int min = arr[0];
	for(int i=0; i<size; i++)
		min = std::min(min,arr[i]);
	return min;
}

int main()
{	
	int size;
	// take the "size" from user
	
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	
	// create an integer array of length "size"
	int arr[size];
	
	// get the array from user
	inputArray(arr, size);
	
	//print the array frist
	printArray(arr, size);
	
	// print the max and min element
	std::cout << "The max element is: " << max_array(arr,size) << "\nThe min element is: " << min_array(arr,size) << std::endl;
	
	return 0;
}
