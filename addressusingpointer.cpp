//printing address of a variable whose value is input from user using pointer
#include<iostream>

using namespace std;

int main(){
	int x;
	int *p=&x;
	cout<<"enter value of x: ";
	cin>>x;
	cout<<"address of variable x is: "<<&p;
	cout<<"\nvalue of variable x is: "<<*p;
	return 0;
}
