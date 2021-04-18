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

void SortingEngine:: PopulateSeq()
{
	for(auto i = 0; i < SIZE; ++i) {
		this->array[i] = i; 
	}
	
	return; 
}

void SortingEngine:: Display()
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
	return; 
}	

unsigned int SortingEngine:: CheckIfEmpty()
{	
	if(this->array[0] == -1000)
		return 1;
	else
		return 0;

	return (unsigned int)(this->array[0] == -1000);
}

unsigned int SortingEngine:: CheckIfSorted() 
{
	for(auto i = 0; i < SIZE; ++i) {
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

void SortingEngine:: RandomizeArray() 
{	
	std::random_device rd;    
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(0,SIZE - 1);

	for(auto i = 0; i < SIZE; ++i) {
		int rando = uni(rng);
		this->array[i] = rando;
	}
	
	return;
}

void SortingEngine:: Swap(int* value1, int* value2) 
{
	int temp1 = *value1; 
	int temp2 = *value2; 
	temp1 = temp1 ^ temp2; 
	temp2 = temp1 ^ temp2;
	temp1 = temp1 ^ temp2; 

	*value1 = temp1; 
	*value2 = temp2;

	return;
}

int SortingEngine:: Partition(int left, int right)
{
	int pivot = this->array[right];
	int i = left - 1; 
	int j = left;
	
	while(j < right) {
		if(this->array[j] < pivot) {
			i++;
			Swap(&(this->array[i]), &(this->array[j]));
		}
		j++;
	}
	Swap(&(this->array[i + 1]), &(this->array[right]));
	return i + 1; 
}

//average case O(nlogn), worst case O(n^2)
void SortingEngine:: QuickSort(int left, int right)
{	
	//base case
	if(right <= left)
		return;

	int pivotIndex = Partition(left, right);
	QuickSort(left, pivotIndex - 1);
	QuickSort(pivotIndex + 1, right);
	return;
}

void SortingEngine:: MergeSort(int low, int high)
{
	if(low < high){
		int midpoint = low + (high - low) / 2;
		MergeSort(low, midpoint);
		MergeSort(midpoint + 1, high);
		Merge(low, high, midpoint);
	}
	return;
}

void SortingEngine:: Merge(int low, int high, int mid)
{
	int i = low;
	int j = mid + 1; 
	int k = 0;
	int* tempArray = (int*)malloc(mid * sizeof(int));
 
	while(i <= mid && j <= high) {
		if(this->array[i] <= this->array[j]) {
			tempArray[k] = this->array[i];
			i++;
			k++;
		}
		else {
			tempArray[k] = this->array[j];
			j++;
			k++;
		}
		

		
	}

	free(tempArray);
}

//all cases O(n^2)
void SortingEngine:: SelectionSort()
{
	int min_index = 0;
	for(auto i = 0; i < SIZE -1; ++i) {
		this->array[min_index] = this->array[i];
		for(auto j = i + 1; j < SIZE; ++j)
			if(this->array[j] < this->array[min_index])
				min_index = j;
		(min_index == i) ? 1 : Swap(&(this->array[i]), &(this->array[min_index]));
	}
	return;
}

//all cases O(n^2)
void SortingEngine:: BubbleSort()
{
	for(auto i = 0; i < SIZE - 1; ++i) {
		for(auto j = i + 1; j < SIZE; ++j) {
			if(this->array[i] > this->array[j])
				Swap(&(this->array[i]), &(this->array[j]));
		}
	}
	return;
}
