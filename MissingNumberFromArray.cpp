//user to input the size of array which means the number of elements user wish to enter, 
//after that user is asked to enter those elements in increasing order by missing any element. The program finds the missing element.
//Logic
	//Sum of n integer elements is: n(n+1)/2. 
	//Here we are missing one element which means we should replace n with n+1 so the total of elements in our case becomes: (n+1)(n+2)/2. 
	//Once we have the total, we are removing all the elements that user has entered from the total, this way the remaining value is our missing number.

#include<bits/stdc++.h>
using namespace std;

int findMissingNo(int arr[], int len){
	int temp;
	temp = ((len+1)*(len+2))/2;
	
	for(int i=0; i<len; i++){
		temp -= arr[i];
	}
	return temp;
}

int main(){
	int i, size, missingNo;
	
	cout<<"Enter Size of Array : ";
	cin>>size;
	
	int arr[size-1];
	
	cout<<"Enter any " <<size <<" Array Elements : "<<endl;
	for(i=0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<endl<<"You Enter the Following Numbers"<<endl;
	cout<<"{ ";
	for (i=0; i<size; i++){
		cout<<arr[i]<<", ";
	}
	cout<<"}";
	
	
	missingNo = findMissingNo(arr ,5);
	cout<<"Missing Number is : "<<missingNo;

return 0;
}
