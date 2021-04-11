#ifndef SORTING_HEADER
#define SORTING_HEADER

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
const int SIZE = 100;

class SortingEngine
{
	private:
		int array[SIZE];

	public: 
		SortingEngine();
		~SortingEngine();
		//uint8_t QuickSort();
		/*uint8_t MergeSort();
		uint8_t BubbleSort();
		uint8_t SelectionSort();*/
		uint8_t CheckIfEmpty();
		uint8_t CheckIfSorted();
		uint8_t RandomizeArray();
		int BinarySearch(int value, int start = 0, int end = SIZE - 1);
		int LinearSearch(int value);
		uint8_t PopulateRand();
		uint8_t PopulateSeq();
		uint8_t Display();	
};		

#endif
