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
		/*
		uint8_t QuickSort();
		uint8_t MergeSort();
		uint8_t BubbleSort();
		uint8_t SelectionSort();
		uint8_t CheckIfSorted();
		uint8_t RandomizeArray();
		//uint8_t BinarySearch(int value);
		//uint8_t LinearSearch(int value);
		//uint8_t ShuffleDeck();
		//uint8_t PopulateRandomDeck();
		*/
		uint8_t PopulateSeq();
		uint8_t Display();	
};		

#endif
