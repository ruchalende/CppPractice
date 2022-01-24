//check if a number can be expressed as a sum of two prime numbers

#include<iostream>

using namespace std;

//function to check if number is prime

int prime(int n){
	int i;
	int flag=0;
	for(i=2; i<=(n/2); i++){
		if(n%i!=0)
		flag=1;
		break;
	}
	return flag;
}

int main(){
	
	int n;
	cout<<"enter a number: ";
	cin>>n;
	
	int i;
	int check=0;
	for(i=2; i<=(n/2); i++){
		//taken till n/2 because the highest i that could be a prime number will not exceed n/2 and if it does, it will be n-i
		if (prime(i)){
		//	to check if the second number is prime or not
			if(prime(n-i)){
				//if it is prime, it will print the addition and check value will be 1
				cout<<n<<"="<<i<<"+"<<n-i<<endl;
				check=1;
			}
		}
	}
	
	if(check==0){
		//will happen if no two number are prime and cannot be expressed as a sum of two numbers 
		cout<<"number cannot be expressed as sum of two prime numbers";
	}
	
	return 0;
}