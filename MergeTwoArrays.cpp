//C++ Program to Merge two Arrays in third array
//In this program we enter an elements in any two array and then these two array (elements of array) are store in third array.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int i, arr1[50], arr2[50], arr3[50], size1, size2;
	
	cout<<"Size of Array 1 : ";
	cin>>size1;
	cout<<"Enter any " <<size1 <<" Array1 Elements : "<<endl;
	for(i=0; i<size1; i++){
		cin>>arr1[i];
	}
	
	cout<<endl<<endl<<"Size of Array 2 : ";
	cin>>size2;
	cout<<"Enter any " <<size2 <<" Array2 Elements : "<<endl;
	for(i=0; i<size2; i++){
		cin>>arr2[i];
	}
	
	
	cout<<endl<<"1st Array Elemets"<<endl;
	cout<<"{ ";
	for (i=0; i<size1; i++){
		cout<<arr1[i]<<", ";
	}
	cout<<"}"<<endl;
	
	cout<<endl<<"2nd Array Elemets"<<endl;
	cout<<"{ ";
	for (i=0; i<size2; i++){
		cout<<arr2[i]<<", ";
	}
	cout<<"}"<<endl;
	
	
	cout<<endl<<endl<<"Merge Array"<<endl;
	int size3 = size1+size2;
	
	for(i=0; i<size3; i++){				//
		arr3[i]=arr1[i];				//assign arr1 to arr3
		arr3[i+size2]=arr2[i];			//assign arr2 to arr3+sizeOFArr2
	}
	
	cout<<"{ ";
	for (i=0; i<size3; i++){
		cout<<arr3[i]<<", ";
	}
	cout<<"}"<<endl;
	
}
