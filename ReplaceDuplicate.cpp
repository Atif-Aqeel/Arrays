//Remove duplicates from array with smallest missing value
//Input []={0,1,2,1,3,2,3,5}
//output[]={01,2,3,4,6,7,5}

#include<iostream>
using namespace std;

int main(){
	const int size = 8;
	int arr[8] = 	{0,1,2,1,3,2,3,5};
	int count[size] = {0};
	
	//To find missing elements or to chech frequency of elements
	for(int i=0; i<size; i++){
		count[arr[i]]++;
	}
	
	int k=0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			k=0;
			if(arr[i]==arr[j]){
				while(k<size){
					if(count[k]==0){
						arr[j]=k;
						count[k]=1;
						
						break;
					}
					k++;
				}
			}
		}
	}
	
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}

}
