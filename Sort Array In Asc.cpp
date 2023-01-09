//Sort Array Elements in Ascending order means arrange elements of array in Increasing Order.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,a[10],temp,j;
 	//clrscr();			//This function is used to clear the previous output from the console
 	
	 //Take Input
	cout<<"Enter any 10 num in array: \n";
 	for(i=0; i<=10; i++){
 		cin>>a[i];
	}
 	
	 //Display Array
 	cout<<"\nData before sorting: ";
 	for(j=0; j<10; j++){
 		cout<<a[j];
 	}
 	
 	
	 //Sorting Algo
 	for(i=0; i<=10; i++){
 		
 		for(j=0; j<=10-i; j++){
 			
 			if(a[j]>a[j+1]){
 				//Swapping
	 			temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
 			}
 		}		
 	}
 	
 	//Print Array
 	cout<<"\nData after sorting: ";
 	for(j=1; j<10; j++){
 		cout<<a[j];
 	}
 	
 	//getch() method pauses the Output Console until a key is pressed.
 	//getch();
 }
