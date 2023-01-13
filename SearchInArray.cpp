//For search array element you need to compare all array element with that particular elements
//Linear Search Method
	//In linear search algorithm, we compare targeted element with each element of the array. If the element is found then its position is displayed.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int i, arr[50], num, size;
	
	cout<<"Size of Array You Want : ";
	cin>>size;
	
	cout<<endl<<"Enter any " <<size <<" Array Elements : "<<endl;
	for(i=0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<endl<<"You Enter the Following Numbers"<<endl;
	cout<<"{ ";
	for (i=0; i<size; i++){
		cout<<arr[i]<<", ";
	}
	cout<<"}";
	
	cout<<endl<<"\nEnter Number to Search its Position: ";
	cin>>num;

	for(i=0; i<size; i++){
		if( arr[i] == num){
			cout<<endl<<"Number Find at index "<<num <<" is "<<i;
		}
	}

}
