//Print zeroes at the end of array
#include<iostream>
using namespace std;

int main(){
	const int size=9;
	int arr[size]={0,1,2,0,0,3,0,5,0};
	int j=0;
	
	//print an array
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//check it is zero or not
	for(int i=0;i<size;i++){
		if(arr[i]!=0){
			arr[j++]=arr[i];
		}
	}
	
	while(j<size){
		arr[j]=0;
		j++;
	}
	
	//print an array after operation
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
