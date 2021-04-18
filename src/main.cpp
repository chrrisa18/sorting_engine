#define SORT
#ifdef SORT
#include "sorting.h"
#endif
using namespace std; 

int main(void) {
	SortingEngine mE; 
	
	int select = -2;
	while(select != -1){
		cout << "-1 Terminate" << "\n";
		cout << "0 Display Arr" << "\n";
		cout << "1 Populate Seq" << "\n";
		cout << "2 Randomize Arr" << "\n";
		cout << "3 Check if Sorted" << "\n";
		cout << "4 Quick Sort" << "\n";
		cout << "5 Merge Sort" << "\n";
		cout << "6 Selection Sort" << "\n";
		cout << "7 Bubble Sort" << "\n";
		cout << "8 Binary Search" << "\n";
		cout << "9 Linear Search" << "\n";
		cin >> select;
		switch(select) {
			case 0: mE.Display(); break;
			case 1: mE.PopulateSeq(); break;
			case 2: mE.RandomizeArray(); break;
			case 3: mE.CheckIfSorted(); break;
			case 4: mE.QuickSort(); break;
			case 5: mE.MergeSort(); break;
			case 6: mE.SelectionSort(); break;
			case 7: mE.BubbleSort(); break;
			case 8: {
				cout << "Select the number you wish to search for: ";
				int value;
				cin >> value;
				cout << mE.BinarySearch(value) << "\n";
				break;
			}
			case 9: {
				cout << "Select the number you wish to search for: ";
				int value2;
				cin >> value2;
				cout << mE.LinearSearch(value2) << "\n";
				break;
			}
			default: break;
		}
	}
	return 0; 
}
