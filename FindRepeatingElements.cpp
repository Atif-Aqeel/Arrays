//Find all repeating elements in array in one loop
#include<iostream>
using namespace std;

	int printDuplicates(int arr[], int n){
		int i;
		int fl = 0;	// Flag variable used to represent whether repeating element is found or not.
		
		for (i=0; i<n; i++) {

			// Check if current element is repeating or not. If it is repeating then value will be greater than or equal to n.
			if (arr[arr[i]%n] >= n) {
			
				// Check if it is first repetition or not. If it is first repetition then value at index arr[i] is less than 2*n. 
				// Print arr[i] if it is first repetition.
				if (arr[arr[i] % n] < 2*n) {
					cout << arr[i] % n << " ";
					fl = 1;
				}
			}
			// Add n to index arr[i] to mark presence of arr[i] or to mark repetition of arr[i].
			arr[arr[i] % n] += n;
		}
		// If flag variable is not set then no repeating element is found. So print -1.
		if (!fl)
			cout << "-1";

		//return 0;
	}
int main(){
	int arr[8] = {0,1,2,1,3,2,3,5};
	for(int i=0; i<8; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int result = printDuplicates(arr, 2);
	cout<<result;
	
	return 0;
}
