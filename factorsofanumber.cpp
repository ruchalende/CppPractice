#include<iostream>
using namespace std;

int main(){
	
	int a;
	cout<<"enter a number:";
	cin>>a;
	
	int i;
	cout<<"factors of "<<a<<" are: ";
	for(i=1; i<=a; i++){
		if(a%i==0){
			cout<<i<<", ";
	    }
	}
		
	return 0;
}
