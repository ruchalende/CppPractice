//print z form of a matrix

#include<iostream>

using namespace std;

int main(){
	int r, c, i, j;
	cout<<"z form of a matrix\n";
	cout<<"enter number of rows and columns (both must be the same number): ";
	cin>>r>>c;
	
	int m[r][c];
	
	if(r!=c){
		cout<<"z form of this matrix cannot be obtained\n";
	}
	else{
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				cout<<"enter element: ";
				cin>>m[i][j];
			}
			cout<<endl;
		}
		
		cout<<"the matrix is:\n";
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				cout<<m[i][j]<<"\t";
			}
			cout<<endl;
		}
		
		cout<<"z form of the matrix is:\n";
		for(j=0; j<c; j++){
			i=0;
			cout<<m[i][j]<<" ";
		}
		i=1; j=c-2;
		while(i<r && j>0){
			cout<<m[i][j]<<" ";
			i++;
			j--;
		}
		for(j=0; j<c; j++){
			i=r-1;
			cout<<m[i][j]<<" ";
			}
}
		
	
	return 0;
}
