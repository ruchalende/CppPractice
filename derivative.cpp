//finding derivative

#include <cmath>
#include <iostream>
using namespace std; 

int derivative(int b, int m) {
	int f=pow(m, b-1);
	int result=f*b;
	return result;
}

int main()
{
	int b, m;
	cin>>b>>m;
	cout<<derivative(b, m);
	return 0;
}