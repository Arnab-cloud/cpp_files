#include <iostream>
#include "arrayFunctions.h"

// the "max heapify function"
void max_heapify(int *arr, int size, int i)
{
	// lets assume that the root element is the max among its immidiate childrens
	int max = i;
	// indexing the left and right children
	int left = 2*i +1, right = 2*i +2;
	
	// comaring(with left children) and updating if the max index
	if(left < size && arr[max] < arr[left])
		max = left;
	
	// comaring(with right children) and updating if the max index
	if(right < size && arr[max] < arr[right])
		max = right;
	
	// if the root is not the max than "swap" with the max
	//  to make the max the new root
	// and heapify the updated child
	if(max != i)
	{
	
		std::swap(arr[max], arr[i]);
		max_heapify(arr,size,max);
	}
}

// the "min heapify" function
void min_heapify(int arr[], int size, int i)
{
	// lets assume that the root element is the min among its immidiate childrens
	int min = i;
	// indexing the left and right children
	int left = 2*i +1, right = 2*i +2;
	
	// comaring(with left children) and updating if the min index
	if(left < size && arr[min] > arr[left])
		min = left;
	
	// comaring(with right children) and updating if the min index
	if(right < size && arr[min] > arr[right])
		min = right;
	
	// if the root is not the min than "swap" with the min
	// to make the min new root
	// and heapify the updated child
	if(min != i)
	{
		std::swap(arr[min], arr[i]);
		min_heapify(arr,size,min);
	}
}


// the main heap sort function that calls the "heapify" function
void heap_sort(int arr[], int size)
{
	// convert the array into a max_heap
	for(int i=size/2-1; i>-1; i--)
		min_heapify(arr,size,i);
		
	// swap the top root element and the last element
	// delete the last element and "max heapify" the root
	// repeat untill the heap is left with only one element
	for(int i=size-1; i>-1; i--)
	{
		std::swap(arr[0], arr[i]);
		min_heapify(arr,i,0);
	}
}

int main()
{
	int arr[] = {49, 411, 5, 517, 206, 207, 399, 117, 444, 498, 124, 529, 701, 511, 905, 405, 199, 570, 894, 587, 260, 938, 105, 336, 562, 904, 473, 669, 456, 820, 854, 496, 892, 702, 841, 756, 970, 891, 107, 475, 430, 374, 795, 505, 256, 850, 388, 112, 613, 766, 510, 999, 50, 289, 86, 644, 851, 439, 604, 460, 452, 959, 102, 89, 692, 926, 800, 378, 391, 860, 916, 188, 596, 111, 906, 803, 542, 349, 512, 954, 554, 874, 310, 679, 435, 706, 139, 223, 154, 573, 391, 852, 143, 850, 474, 6, 577, 682, 106, 358, 527, 894, 378, 933, 548, 210, 471, 147, 164, 757, 894, 457, 605, 772, 165, 433, 948, 850, 774, 462, 481, 163, 655, 627, 872, 790, 381, 187, 671, 323, 830, 600, 477, 956, 804, 310, 32, 442, 741, 833, 727, 718, 478, 46, 109, 576, 407, 409, 945, 191, 388, 790, 735, 254, 754, 801, 604, 313, 25, 465, 460, 26, 856, 246, 174, 373, 868, 968, 784, 637, 150, 296, 110, 438, 563, 78, 447, 452, 637, 155, 962, 784, 106, 421, 353, 777, 681, 968, 765, 392, 759, 93, 386, 688, 738, 959, 467, 882, 948, 803, 872, 856, 419, 813, 126, 436, 741, 425, 352, 793, 402, 142, 151, 934, 450, 93, 483, 468, 303, 479, 744, 955, 468, 84, 571, 437, 904, 437, 677, 219, 376, 984, 330, 977, 386, 885, 799, 908, 389, 904, 159, 67, 230, 747, 357, 315, 501, 609, 250, 98, 205, 500, 715, 911, 768, 171, 892, 787, 267, 999, 42, 428, 365, 359, 342, 360, 755, 119, 259, 58, 263, 623, 450, 676, 748, 776, 521, 516, 509, 86, 803, 685, 482, 818, 53, 944, 23, 156, 674, 467, 464, 368, 74, 226, 811, 367, 31, 718, 336, 381};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	/*int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	
	int arr[size];
	// input the array
	inputArray(arr,size);*/
	
	// print the array
	printArray(arr, size);
	
	// heap sort the array
	heap_sort(arr,size);
	// print again teh sorted array
	printArray(arr,size);
	
	return 0;
}
