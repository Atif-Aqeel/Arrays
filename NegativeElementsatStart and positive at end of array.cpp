//Put negative elements at the start and positive at end of array
#include <bits/stdc++.h>
using namespace std;

int rearrange(int arr[], int n){
	// The following few lines are similar to partition process of QuickSort. The idea is to consider 0 as pivot and divide the array around it.
	int i = -1;
	for (int j = 0; j < n; j++)
	{
		if (arr[j] < 0)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	//display
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
}
int main(){
	const int size=6;
	int arr[size]={9,-4,-2,7,1,3};
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
	cout<<endl;
	//print max
	int result = rearrange(arr,size);
	cout<<result;
}
