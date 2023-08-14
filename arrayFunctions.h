void inputArray(int arr[], int size)
{
	std::cout << "Enter the values of the array: ";
	for(int i=0; i<size; i++)
		std::cin >> arr[i];
}

void printArray(int arr[],int size)
{
	std::cout << "The array is:\n";
	for(int i=0; i<size; i++)
		std::cout<< arr[i] << " ";
	std::cout << std::endl;
}

void reverseArray(int arr[], int size)
{
	for(int i=0; i<size/2; i++)	
		std::swap(arr[i], arr[size-i-1]);
}
