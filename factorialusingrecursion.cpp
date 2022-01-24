#include<iostream>

using namespace std;

	int fact(int n){
		if(n>=1)
		return n*fact(n-1);
		else
		return 1;
	}

int main(){
	
	int n;
	cout<<"enter a number: ";
	cin>>n;
	
	int f=fact(n);
	
	cout<<"factorial of "<<n<<" is: "<<f;
	return 0;
}