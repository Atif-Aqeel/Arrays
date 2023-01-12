//Array store all data in array on the basis of index. For reverse an array element you nedd to interchange elements of array on the basis of index value.
#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr1[10], arr2[10], i, j, n;
	
	cout<<"How Many Number of Array You Need : ";
	cin>>n;
	
	cout<<endl<<"Enter Array Elements :"<<endl;
	for(i=0; i<n; i++){
		cin>>arr1[i];
	}
	//Display of Array
	cout<<endl<<"You Enter Array Elemnts are : "<<endl;
	cout<<"{";
	for(i=0; i<n; i++){
		cout<<arr1[i]<<", ";
	}
	cout<<"}"<<endl;
	
	
	cout<<endl<<"Reverse OF Array"<<endl;
	for(i=n-1,j=0; i>=0; i--,j++){
		arr2[i]=arr1[j];
	}
	
	//Display of Reverse Array
	cout<<"{";
	for(i=0; i<n; i++){
		cout<<arr2[i]<<", ";
	}
	cout<<"}";
	
}

