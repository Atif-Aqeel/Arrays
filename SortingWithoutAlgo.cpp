//Dutch National Flag problem
//Sort an array of 0s, 1s, and 2s using the Pointer Approach: 

#include<bits/stdc++.h>
using namespace std;

// Function to sort the input array, the array is assumed to have values in {0, 1, 2}
void sort012(int arr[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	// Iterate till all the elements are sorted
	while (mid <= hi) {
		switch (arr[mid]){

		// If the element is 0
		case 0:
			swap(arr[lo++], arr[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(arr[mid], arr[hi--]);
			break;
		}
	}
}

void printArray(int arr[], int arr_size){
	
	cout<<"{ ";
	for (int i=0; i<arr_size; i++){
		cout<<arr[i]<<", ";
	}
	cout<<"}";

}

int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };

	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout<<endl<<"Array Elements are : "<<endl;
	printArray(arr, n);
	
	sort012(arr, n);
	
	cout<<endl<<endl<<"After Sorting Array Elements are : "<<endl;
	printArray(arr, n);


return 0;
}
