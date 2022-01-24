//a program to find out the greatest and the smallest among three numbers using pointers

#include<iostream>

using namespace std;

int main(){
	int x, y, z;
	cout<<"enter three numbers: ";
	cin>>x>>y>>z;
	int *a=&x;
	int *b=&y;
	int *c=&z;
	if(*a>=*b && *a>=*c){
		cout<<"greatest number: "<<*a;
	}
	else if(*b>=*a && *b>=*c){
		cout<<"greatest number: "<<*b;
	}
	else if(*c>=*a && *c>=*b){
		cout<<"greatest number: "<<*c;
	}
	if(*a<=*b && *a<=*c){
		cout<<"\nsmallest number: "<<*a;
	}
	else if(*b<=*a && *b<=*c){
		cout<<"\nsmallest number: "<<*b;
	}
	else if(*c<=*a && *c<=*b){
		cout<<"\nsmallest number: "<<*c;
	}
	
	return 0;
}
