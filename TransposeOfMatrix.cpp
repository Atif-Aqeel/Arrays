//Transpose of Matrix
#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int matrix[10][10],transpose_matrix[10][10];
    int i,j,row,col;

	cout<<"Enter the Number of Rows:";
	cin>>row;
	
	cout<<endl<<"Enter the Number of Coloumns:";
	cin>>col;
	
	//Elemet of m x n matrix
	cout<<endl<<"Enter Element of 1st matrix: "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			
			cin>>matrix[i][j];
		}
	}

    cout<<"\n Matrix You Entered\n";
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
               cout<<matrix[i][j]<<"     ";
           }
        cout<<endl;
    }



	// Calculating Transpose of Matrix
    cout<<"\n\n\nTranspose of Entered Matrix\n";
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
           	
            transpose_matrix[j][i]=matrix[i][j];
        }
    	cout<<endl;
    }

	//Displaying Final Resultant Array
    for( i=0;i<col;i++){
        for( j=0;j<row;j++)
        {
            cout<<transpose_matrix[i][j]<<"    ";
        }
        cout<<endl;
    }
}
