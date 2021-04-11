#include "sorting.h"

SortingEngine:: SortingEngine() 
{
	int i = 0;
	while(i < SIZE)
		this->array[i++] = -1000;
}

SortingEngine:: ~SortingEngine() 
{
	 
}

uint8_t SortingEngine:: PopulateSeq()
{
	for(auto i = 0; i < SIZE; ++i) {
		this->array[i] = i; 
	}
	
	return 1; 
}

uint8_t SortingEngine:: Display()
{
	for(auto i = 0; i < SIZE; ++i) {
		if(this->array[i] < 10)
			std::cout << this->array[i] << "  ";
		else
			std::cout << this->array[i] << " "; 
		
		if(!((i+1) % 10))
			std::cout << "\n"; 
	}
	std::cout << "\n";
	return 1; 
}	

uint8_t SortingEngine:: CheckIfEmpty()
{	
	if(this->array[0] == -1000)
		return 1;
	else
		return 0;

	return (uint8_t)(this->array[0] == -1000);
}

uint8_t SortingEngine:: CheckIfSorted() 
{
	for(auto i = 1; i < SIZE-1; ++i) {
		if(this->array[i] < array[i-1])
			return 0;
	}
	return 1; 

}

int SortingEngine:: LinearSearch(int value)
{
	if(CheckIfEmpty()) return -1; 

	for(auto i = 0; i < SIZE; ++i) {
		if(this->array[i] == value)
			return i;
	}

	return -1;  
}

//Compute in O(log2(n))
int SortingEngine:: BinarySearch(int value, int start, int end)
{	
	//base case
	if(start > end)
		return -1;

	int mid = start + ((end - start) / 2); 

	if(this->array[mid] == value)
		return mid; 

	if(this->array[mid] > value)
		return BinarySearch(value, start, mid - 1);
	
	else
		return BinarySearch(value, mid + 1, end);
}

uint8_t SortingEngine:: RandomizeArray() 
{
	for(auto i = 0; i < SIZE; ++i) {
		int rando = rand() % 100;
		this->array[i] = rando;
	}
	
	return 1;
}

