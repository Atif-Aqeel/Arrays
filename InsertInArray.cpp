//C++ program to Insert an element in an array at specific position
//Insert an element in an array at specific position on the basis of index value.
#include<bits/stdc++.h>
using namespace std;

int main(){
	int i, no, arr[10], pos;
	
	cout<<"How Many Number of Elemnts in Array You Want : ";
	cin>>no;
	
	cout<<endl<<"Enter Array Elements : "<<endl;
	for(i=0; i<no; i++){
		cin>>arr[i];
	}
	
	cout<<endl<<"You Enter the Following Numbers"<<endl;
	cout<<"{ ";
	for (i=0; i<no; i++){
		cout<<arr[i]<<", ";
	}
	cout<<"}";
	
	cout<<endl<<"\nEnter position to enter a Number : ";
	cin>>pos;
	
	if(pos>no){
		cout<<"You are Out of Range"<<endl;
		//cout<<endl<<"Please Enter Valid position to enter a Number : ";
		//cin>>pos;
		//if(pos<no){
		//	cout<<endl<<"You Enter Valid Position "<<pos;
		//}
	}
	else{
		//cout<<endl<<"Enter New Position : ";
		//cin>>pos;
		int n;
		cout<<"Enter New Number : ";
		cin>>n;
	
		--pos;
		for(i=no; i>=pos; i--){				//Take "no" in Used
			arr[i+1]=arr[i];
		}
		arr[pos]=n;							//Assign new number to selected postion
	
		//Displaye New Array
		cout<<endl<<"New Data is : "<<endl;
		cout<<"{ ";
		for(i=0; i<no; i++){
			cout<<arr[i]<<", ";
		}
		cout<<"}";
	}

}
