#define SORT
#ifdef SORT
#include "sorting.h"
#endif
using namespace std; 

int main(void) {
	SortingEngine mE; 
	
	/*unsigned int select = -1;
	while(1){
		cout << "0. Display Arr" << "\n";
		cout << "1. Populate Seq" << "\n";
		cout << "2. Randomize Arr" << "\n";
		cout << "3. Check if Sorted" << "\n";
		cout << "4. Quick Sort" << "\n";
		cout << "5. Merge Sort" << "\n";
		cout << "6. Selection Sort" << "\n";
		cout << "7. Bubble Sort" << "\n";
		cout << "8. Binary Search" << "\n";
		cout << "9. Linear Search" << "\n";

	}*/
	mE.PopulateSeq();
	mE.Display();
	mE.RandomizeArray();
	mE.Display();
	mE.MergeSort();
	mE.Display();
	return 0; 
}
