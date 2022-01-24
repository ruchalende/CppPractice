//sum of array using function template

#include<iostream>

using namespace std;

template<typename T>
T add_array(T x){
	T sum;
	sum+=x;
	return sum;
}

int main(){
	int i, sum_i=0;
	cout<<"integer array\n";
	int array_i[5];
	for(i=0; i<5; i++){
		cout<<"enter element: ";
		cin>>array_i[i];
		sum_i+=add_array(array_i[i]);
	}
	cout<<"addition of elements in the array is: "<<sum_i;
	
	cout<<"\nfloat array\n";
	float sum_f=0;
	float array_f[5];
	for(i=0; i<5; i++){
		cout<<"enter element: ";
		cin>>array_f[i];
		sum_f+=add_array(array_f[i]);
	}
	cout<<"addition of elements in the array is: "<<sum_f;
	
	return 0;
}
