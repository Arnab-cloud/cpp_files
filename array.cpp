#include <iostream>

void inputArray(int arr[], int size)
{
	std::cout <<"Enter the elemnts of the array: " ;
	for(int i=0; i<size; i++)
		std::cin >> arr[i];
}

void printArray(int arr[], int size)
{
	std::cout << "The array is: \n";
	for(int i=0; i<size; i++)
		std::cout << arr[i]<< " ";	
}

int main()
{
	int n;
	std::cout << "Enter the size of the array: ";
	std::cin >> n;
	int arr[n];
	// user input
	inputArray(arr,n);
	
	//print the array
	printArray(arr,n);
	
	return 0;	
}
