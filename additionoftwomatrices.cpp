//addition of two matrices

#include<iostream>

using namespace std;

int main(){
	int r, c, i, j;
	
	cout<<"enter the number of rows: ";
	cin>>r;
	cout<<"enter the number of columns: ";
	cin>>c;
	
	int m1[r][c], m2[r][c], sum[r][c];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<"enter element of m1 matrix: ";
			cin>>m1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"first matrix is:\n";
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<m1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<"enter element of m2 matrix: ";
			cin>>m2[i][j];
		}
		cout<<endl;
	}
	
	cout<<"second matrix is:\n";
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<m2[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"sum of the two matrices is:\n";
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			sum[i][j]=m1[i][j]+m2[i][j];
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
