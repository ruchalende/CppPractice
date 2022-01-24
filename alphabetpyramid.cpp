#include<iostream>

using namespace std;
	
	int main(){
		
		char input, alphabet='A';
		cout<<"enter alphabet you want in the last row: ";
		cin>>input;
		
		int i, j;
		for(i=1; i<=(input-'A'+1); i++){
			for(j=1; j<=i; j++){
				cout<<alphabet<<" ";
			}
			alphabet++;
			cout<<endl;
		}
		
		
		
		return 0;
	}
