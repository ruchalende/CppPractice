#include<iostream>

using namespace std;

void prime(int a, int b){
	int i;
	for(i=a; i<=b; i++){
		if(i%2!=0){
		    cout<<i<<", ";
		}
	}
}

int main(){
	
	int a, b;
	cout<<"enter two integers: ";
	cin>>a>>b;
	
	cout<<"prime numbers between "<<a<<" and "<<b<<" are: ";
	prime(a, b);
	
	return 0;
}
