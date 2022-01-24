//multiplication of two matrices

#include<iostream>

using namespace std;

int main(){
	int r1, r2, c1, c2, i, j, k;
	
	cout<<"enter the number of rows in m1 matrix: ";
	cin>>r1;
	cout<<"enter the number of columns in m1 matrix: ";
	cin>>c1;
	
	int m1[r1][c1];
	
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			cout<<"enter element of m1 matrix: ";
			cin>>m1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"m1 matrix is:\n";
	for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
			cout<<m1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"enter the number of rows in m1 matrix: ";
	cin>>r2;
	cout<<"enter the number of columns in m1 matrix: ";
	cin>>c2;
	
	int m2[r2][c2];
	int product[r1][c2];
	
	for(i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			cout<<"enter element of m1 matrix: ";
			cin>>m2[i][j];
		}
		cout<<endl;
	}
	
	cout<<"m2 matrix is:\n";
	for(i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			cout<<m2[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(i=0; i<r2; i++){
		for(j=0; j<c2; j++){
			product[i][j]=0;
		}
	}
	
	if(c1!=r2){
		cout<<"multiplication of m1 and m2 is not possible\n";
	}
	else{
		for(i=0; i<r1; i++){
			for(j=0; j<c2; j++){
				for(k=0; k<c1; k++){
					product[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}
	
		cout<<"product of the two matrices is:\n";
		for(i=0; i<r1; i++){
			for(j=0; j<c2; j++){
				cout<<product[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	
	
	return 0;
}
