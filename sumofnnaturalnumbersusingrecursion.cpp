//addition of n natural numbers using recursion

#include<iostream>

using namespace std;

int sum(int n){
	if (n>0)
	return n+sum(n-1);   //here recursion takes place
	else 
	return 0; 
	}

int main(){
	
	int n;
	cout<<"enter a number: ";
	cin>>n;
	
	int s=sum(n);  //s will finally have the value of sum of n numbers after the recursion terminates
	cout<<"sum of "<<n<<" natural numbers is: "<<s;  //final addition is stored in value s

	return 0;
}