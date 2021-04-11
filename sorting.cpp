#include "sorting.h"

SortingEngine:: SortingEngine() 
{
	
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

uint8_t SortingEngine:: Display(){
	for(auto i = 0; i < SIZE; ++i) {
		std::cout << this->array[i] << " "; 
		if(!((i+1) % 10))
			std::cout << "\n"; 
	
	}
	std::cout << "\n";
	return 1; 
}	


