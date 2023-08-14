#include <iostream>

int binary_search(int *arr,int size, int num)
{
	int start = 0 , end = size-1, mid = start + (end - start)/2;
	while(start<=end)
	{
		std::cout << "start = " << arr[start] << " mid = "<< arr[mid] << " end = "<< arr[end]<< " \n"<<std::endl; 
		if(arr[mid] == num)
			return mid;
		else if(arr[mid] > num)
		{
			end = mid;
			mid = start + (end - start)/2; 
		}
		else
		{
			start = mid;
			mid = start + (end - start)/2;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1, 2, 5, 13, 20, 28, 29, 31, 47, 50, 52, 57, 69, 94, 97};
	int size = sizeof(arr)/sizeof(arr[0]), num;
	std::cout << "Enter the element to be searched: ";
	std::cin >> num;
	num = binary_search(arr,size,num);
	if(num!= -1)
		std::cout << "Element is present in # " << num + 1 << " Position\n";
	else
		std::cout << "Element is not present\n";
	
	return 0;
}
