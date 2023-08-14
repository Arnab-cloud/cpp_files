#include <iostream>

bool search(int arr[], int size,  int key)
{
	for(int i=0; i<size; i++)
		if(arr[i] == key)
			return true;
	return false;
}

int main()
{
	int arr[] = {5,7,-2,10,22,-2,0,5,22,1};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	int key;
	std::cout << "Enter the key: ";
	std::cin>>key;
	if(search(arr,size,key))
		std::cout << "The key " << key <<" Present\n";
	else
		std::cout << "The key " << key << " is not present\n";
	
	return 0; 
}
