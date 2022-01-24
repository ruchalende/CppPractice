#include<iostream>

using namespace std;

int main(){
	/*
	//call by reference
	int num=10;
	int *p=&num;
	
	cout<<"\nnum: "<<num;
	cout<<"\n*p: "<<*p;
	
	num=num+10;
	
	cout<<"\nnum: "<<num;
	cout<<"\n*p: "<<*p;
	
	*p=*p+10;
	
	cout<<"\nnum: "<<num;
	cout<<"\n*p: "<<*p;
	*/
	
	int a=10;
	int & b=a;  //reference to variable a
	
	a=a+10;
	
	cout<<"\na: "<<a;
	cout<<"\nb: "<<b;
	
	b=b+10;
	
	cout<<"\na: "<<a;
	cout<<"\nb: "<<b;
	
	
	return 0;
}
