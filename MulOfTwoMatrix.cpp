//C++ Program to multply 2 Matrix
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int matrix1[10][10], matrix2[10][10], matrix3[10][10], row, col, i, j, k ;
	int sum=0;
	
	cout<<"Enter the Number of Rows:";
	cin>>row;
	
	cout<<endl<<"Enter the Number of Coloumns:";
	cin>>col;
	
	//Elemet of m x n matrix
	cout<<endl<<"Enter Element of 1st matrix: "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			
			cin>>matrix1[i][j];
		}
	}
	
	cout<<endl<<"Enter Second Matrix Element : "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			
			cin>>matrix2[i][j];
		}
	}
	

	//Print 1st MAtrix 
	cout<<endl<<endl<<"MATRIX 1st :";
	for(i=0; i<row; i++){
		cout<<"\n\n";
		for(j=0; j<col; j++){
			cout<<matrix1[i][j];
		}
	}
	
	//Print 2nd MAtrix
	cout<<endl<<endl<<"MATRIX 2nd : ";
	for(i=0; i<row; i++){
		cout<<"\n\n";
		for(j=0; j<col; j++){
			cout<<matrix2[i][j];
		}
	}
	
	
	cout<<endl<<endl<<"Multiplication of Matrix is "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			
			sum=0;
			for(k=0; k<2; k++){
				sum = sum + matrix1[i][k] * matrix2[k][j];
			}
			matrix3[i][j]=sum;

		}
	}
	//Print Multiply Matrix
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			
			cout<<matrix3[i][j]<<" ";
		}
		cout<<"\n";
	}

}
