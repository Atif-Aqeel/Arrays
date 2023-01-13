//Delete an element in an array from specific position

#include<bits/stdc++.h>
using namespace std;

int main(){
	int i, arr[50], num, size, pos;
	
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
	
	cout<<endl<<"\n Enter Position of Number to Delete : ";
	cin>>pos;

	if(pos>size){
		cout<<endl<<"The Value Out Of Range. ";
	}
	else{
		
		//Delet Logic
		--pos;
		for(i=pos; i<=size; i++){
			arr[i]=arr[i+1];
		}
		
	
		//Displaye New Array
		cout<<endl<<"New Data is : "<<endl;
		cout<<"{ ";
		for(i=0; i<size-1; i++){
			cout<<arr[i]<<", ";
		}
		cout<<"}";

	}
}
