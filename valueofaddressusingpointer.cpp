//value of address of the pointer to a variable whose value is input from user

#include<iostream>

using namespace std;

int main(){
	int y, *p;
	cout<<"enter y: ";
	cin>>y;
	p=&y;
	cout<<"value of address of variable "<<y<<" is: "<<p;
	return 0;
}
