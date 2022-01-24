//add two numbers using function template

#include<iostream>

using namespace std;

template<typename T>
add(T n1, T n2){
	T sum;

	sum=n1+n2;
	cout<<sum;
}


int main(){
	
	int i1, i2;
	cout<<"\nenter two integers: ";
	cin>>i1>>i2;
	
	cout<<"addition of "<<i1<<" and "<<i2<<" is: ";
	add(i1, i2);
	
	float f1, f2;
	cout<<"\n\nenter two floating point numbers: ";
	cin>>f1>>f2;
	
	cout<<"addition of "<<f1<<" and "<<f2<<" is: ";
	add(f1, f2);
	
	double d1, d2;
	cout<<"\n\nenter two floating point numbers: ";
	cin>>d1>>d2;
	
	cout<<"addition of "<<d1<<" and "<<d2<<" is: ";
	add(d1, d2);
	
	string s1, s2;
	cout<<"\n\nenter two strings: ";
	cin>>s1>>s2;
	
	cout<<"addition of "<<s1<<" and "<<s2<<" is: ";
	add(s1, s2);
	
	return 0;
}
