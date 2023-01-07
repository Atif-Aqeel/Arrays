// Print zeroes at the end of array without counting zeros

#include<iostream>
using namespace std;

int main(){
	int arr[8] = {0,1,2,1,3,2,3,5};
	int size = 8;
	int end_ptr = size - 1;
	int i = 0;
	
	//print an array
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << " ";
	}
	cout<<endl;
	
	//
	while (i < size)
	{
		if (i == end_ptr) 
			break;
			
		if (arr[i]==0 && arr[end_ptr]!=0){
			int temp = arr[i];
			arr[i] = arr[end_ptr];
			arr[end_ptr] = temp;
			end_ptr --;
			i++;
		}
		else if (arr[i] == 0 && arr[end_ptr] == 0){
			end_ptr--;	
		}
		else {
			i++;	
		}
	}
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << " ";
	}

}
