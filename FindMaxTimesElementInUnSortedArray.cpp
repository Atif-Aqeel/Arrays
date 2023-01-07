//Find maximum times repeating element in unsorted array
#include <iostream>
using namespace std;

void findMaxRepeating(int arr[],int size){
	int lar=arr[0];
	int ind;
	for(int i=0;i<size;i++){
		if(lar<arr[i]){
			lar=arr[i];
			ind=lar;
		}
	}
	const int count_size=lar+1;
	int count[count_size]={0};
	for(int j=0;j<size;j++){
		count[arr[j]]++;
	}
	lar=count[1];
	for(int i=1;i<count_size;i++){
		if(lar<count[i]){
			lar=count[i];
		}
	}
	cout<<ind<<" is repeating "<<lar<<" times\n";
}

int main(){
	const int size=6;
	int arr[size]={1,4,2,4,4,3};
	//print array
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
	cout<<endl;
	//print max
	findMaxRepeating(arr,size);
}

