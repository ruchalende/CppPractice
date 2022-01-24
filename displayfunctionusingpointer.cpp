//Write a function which will take pointer and display the number on screen.
//Take number from user and print it on screen using that function.

#include<iostream>

using namespace std;

void display(int *p){
	cout<<"the number is: "<<*p;
}

int main(){
	int x;
	cout<<"enter x: ";
	cin>>x;
	int *p=&x;
	display(p);
	return 0;
}
