//Addistion of two matrix
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x[3][3],y[3][3],z[3][3],i,j;

	cout<<"ENTER ELEMENTS OF 1st MATRIX\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin>>x[i][j];
		}
	}

	cout<<"ENTER ELEMENTS OF 2nd MATRIX\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin>>y[i][j];
		}
	}

	cout<<"MATRIX [X]";
	for(i=0; i<3; i++){
	
		cout<<"\n\n";
		for(j=0; j<3; j++){
	
			cout<<x[i][j];
		}
	}

	cout<<"\nMATRIX [Y]";
	for(i=0; i<3; i++){
	
		cout<<"\n\n";
		for(j=0; j<3; j++){
	
			cout<<y[i][j];
		}
	}
	
	//Addistion of Two Matrix
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			z[i][j]=x[i][j]+y[i][j];
		}
	}

	cout<<"Addistion of Two Matrix";
	cout<<"\nMATRIX [Z]";
	for(i=0; i<3; i++){
		cout<<"\n\n";
		for(j=0; j<3; j++){
		
			cout<<z[i][j];
		}
	}

}