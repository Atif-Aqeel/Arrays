//Find maximum times repeating element in sorted array in one loop

#include<iostream>
using namespace std;

void findMaxMode(int arr[], int size){
	int count = 1; 
	int maxCount = 0;
	int element = 0;
	for (int i = 1; i < size; i++){
		if (arr[i] == arr[i - 1]){
			count++;
		}
		else {
			if (count>maxCount){
				maxCount = count;
				element = arr[i - 1];
			}
			count = 1;
		}
	}
	if (count > maxCount)
	{
		maxCount = count;
		element = arr[size - 1];
	}
	cout << element << " is repeating " << maxCount << " times\n";
}

int main(){
	int arr[] = {1,1,1,2,2,2,2};
	int size = 7;
	//print array
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
	cout<<endl;
	//print max 
	findMaxMode(arr, size);
}

