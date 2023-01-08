//Find smallest missing number in an unsorted array
#include <iostream>
#include <cmath>
using namespace std;

int findMissingPositive(int arr[], int size){
	int i;
	// Mark arr[i] as visited by making arr[arr[i] - 1] negative.
	// Note that 1 is subtracted because index start from 0 and positive numbers start from 1
	for (i = 0; i < size; i++) {
		if (abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0){
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
		}
	}
	
	// Return the first index value at which is positive
	for (i = 0; i < size; i++){
		if (arr[i] > 0)
			// 1 is added because indexes start from 0
			return i + 1;
	}
			
	return size + 1;
}


int main(){
	const int size=6;
	int arr[size]={9,4,2,7,1,3};
	//print array
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
	cout<<endl;
	//print max
	findMissingPositive(arr,size);
}

