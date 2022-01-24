//storing five values in array using pointer and printing the elements
#include<iostream>

using namespace std;

int main(){
	int arr[5], i;
	int *p=arr;
	for(i=0; i<5; i++){
		cout<<"enter number: ";
		cin>>*(p+i);
	}
	cout<<"the array is:\n";
	for(i=0; i<5; i++){
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
