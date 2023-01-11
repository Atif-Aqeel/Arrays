//Even/Odd
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int arr[10], even[10], odd[10], i, j=0, k, no;
	
	cout<<"How Size of Array ? ";
	cin>>no;
	
	cout<<"Enter any "<<no<<" Elemets in Array"<<endl;
	for(i=0; i<no; i++){
		cin>>arr[i];
	}
	
	//Calculation
	for(i=0; i<no; i++){
		if(arr[i]%2==0){
			even[j]=arr[i];
			j++;
		}
		else{
			odd[k]=arr[i];
			k++;
		}
	}
	
	cout<<"\nEven Elemets"<<endl;
	for(i=0; i<j; i++){
		cout<<even[i]<<" ";
	}
	
	cout<<"\nOdd Elemets"<<endl;
	for(i=0; i<k; i++){
		cout<<odd[i]<<" ";
	}


}
