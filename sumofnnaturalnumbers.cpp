//check if a number can be expressed as a sum of two prime numbers

#include<iostream>

using namespace std;

int sum(int n){
	if (n>0)
	return n+sum(n-1);
	else 
	return 0; 
	}

int main(){
	
	int n;
	cout<<"enter a number: ";
	cin>>n;
	
	int s=sum(n);
	cout<<"sum of "<<n<<" natural numbers is: "<<s;
	
	
	
	return 0;
}
