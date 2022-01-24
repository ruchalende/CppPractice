//simple calculator using template
#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
class cal{
	private:
		T n1;
		T n2;
	public:
		void addition(T, T);
		void subtraction(T, T);
		void multiplication(T, T);
		void division(T, T);
	};
	
template<class T>
void cal<T>::addition(T n1, T n2){
	T add_result=n1+n2;
	cout<<n1<<"+"<<n2<<"="<<add_result<<endl;
}

template<class T>
void cal<T>::subtraction(T n1, T n2){
	T sub_result=n1-n2;
	cout<<n1<<"-"<<n2<<"="<<sub_result<<endl;
}

template<class T>
void cal<T>::multiplication(T n1, T n2){
	T mul_result=n1*n2;
	cout<<n1<<"*"<<n2<<"="<<mul_result<<endl;
}

template<class T>
void cal<T>::division(T n1, T n2){
	T div_result=n1/n2;
	cout<<n1<<"/"<<n2<<"="<<div_result<<endl;
}


int main(){
	cout<<"simple calculator\n\n";
	
//	cout<<""
	cal<int>c;
	cal<float>f;
	
		int n1, n2;
		cout<<"enter two integers: ";
		cin>>n1>>n2;
	
	
	int choice, result;
	while(choice!=6){
		cout<<"1.add\n2.subtract\n3.multiply\n4.divide\n5.exit\n";
		cout<<"enter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				c.addition(n1, n2);
				break;
				
			case 2:
				c.subtraction(n1, n2);
				break;
				
			case 3:
				c.multiplication(n1, n2);
				break;
				
			case 4:
				c.division(n1, n2);
				break;
				
			case 5:
				exit(0);
				break;
				
		}
	}
	
	
	
	
	return 0;
}
