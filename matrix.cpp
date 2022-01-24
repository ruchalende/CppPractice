//creating a matrix

#include<iostream>

using namespace std;

int main(){
	cout<<"creating a matrix\n\n";
	int r, c, i, j;
	cout<<"enter number of rows: ";
	cin>>r;
	cout<<"enter number of columns: ";
	cin>>c;
	
	int matrix[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<"enter element: ";
			cin>>matrix[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\nthe matrix is:\n";
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
