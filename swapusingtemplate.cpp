#include<iostream>

using namespace std;

template<typename T>
void Swap(T &n1, T &n2){
	T temp;
	temp=n1;
	n1=n2;
	n2=temp;
};


int main(){
	int i1, i2;
	float f1, f2;
	char c1, c2;
	
	cout<<"enter two integers: ";
	cin>>i1>>i2;
	
	cout<<"enter two floating point numbers: ";
	cin>>f1>>f2;
	
	cout<<"enter two characters: ";
	cin>>c1>>c2;
	
	swap(i1, i2);
	swap(f1, f2);
	swap(c1, c2);
	
	cout<<"\nafter swapping: "<<endl;
	cout<<"\ni1="<<i1<<"\ti2="<<i2<<endl;
	cout<<"\nf1="<<f1<<"\tf2="<<f2<<endl;
	cout<<"\nc1="<<c1<<"\tc2="<<c2<<endl;
	
	return 0;
}
