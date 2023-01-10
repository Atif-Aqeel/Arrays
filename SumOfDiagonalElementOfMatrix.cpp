//C++ Program to Find Sum of Diagonal Elements of Matrix
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i, j, matrix[10][10], row, col;
	int sum=0;
	
	cout<<"Enter the Number of Rows:";
	cin>>row;
	
	cout<<"Enter the Number of Coloumns:";
	cin>>col;
	
	//Elemet of m x n matrix
	cout<<"Enter Element of matrix: "<<endl;;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cin>>matrix[i][j];
		}
	}
	
	//Print MAtrix
	cout<<"MATRIX [X]";
	for(i=0; i<row; i++){
		cout<<"\n\n";
		for(j=0; j<col; j++){
			cout<<matrix[i][j];
		}
	}
	
	//Addistion of All Diagonals
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(i==j){
				sum = sum+matrix[i][j];
			}
		}
	}
	
	cout<<endl<<"\n Sum Oof Array Diagonal : "<<sum;

}
