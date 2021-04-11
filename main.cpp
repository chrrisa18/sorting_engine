#include "sorting.h"
using namespace std; 

int main(void) {
	SortingEngine myEngine;
	myEngine.PopulateSeq();
	myEngine.Display();
	cout << myEngine.BinarySearch(53) << endl;
	myEngine.RandomizeArray();
	myEngine.Display();
	return 0; 
}
