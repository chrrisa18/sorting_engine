#ifndef SORTING_HEADER
#define SORTING_HEADER
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <random>
const int SIZE = 100;

class SortingEngine
{
	private:
		int array[SIZE];

	public: 
		SortingEngine();
		~SortingEngine();
		void QuickSort(int left = 0, int right = SIZE - 1);
		void MergeSort(int low = 0, int high = SIZE - 1);
		void BubbleSort();
		void SelectionSort();
		int BinarySearch(int value, int start = 0, int end = SIZE - 1);
		int LinearSearch(int value);
		unsigned int CheckIfEmpty();
		unsigned int CheckIfSorted();
		void RandomizeArray();
		void PopulateSeq();
		void Display();	
		void Swap(int* value1, int* value2);
		int Partition(int left, int right);
		void Merge(int low, int high, int mid);
};		
#endif
