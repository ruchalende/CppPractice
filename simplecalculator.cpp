#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num1, num2, choice;
	cout<<"SIMPLE CACULATOR"<<endl;
	cout<<"enter first number: ";
	cin>>num1;
	
	cout<<"\nenter second number: ";
	cin>>num2;
	
	do{
	
	        cout<<"choose an operation from the following menu"<<endl;
        	cout<<"1.add\n2.subtract\n3.multiply\n4.divide\n5.exit\n";
        	cout<<"enter your choice: ";
	        cin>>choice;
	

	
	
		switch(choice){
		    
		   
			int sum, sub, mul;
			float divide;
			case 1:
				sum=num1+num2;
				cout<<num1<<"+"<<num2<<"="<<sum<<endl;
				break;
				
			case 2:
				sub=num1-num2;
				cout<<num1<<"-"<<num2<<"="<<sub<<endl;
				break;
				
			case 3:
				mul=num1*num2;
				cout<<num1<<"*"<<num2<<"="<<mul<<endl;
				break;
				
			case 4:
				divide=num1/num2;
				cout<<num1<<"/"<<num2<<"="<<divide<<endl;
				break;
				
			case 5:
				exit(0);
				break;
				
			default:
				cout<<"\nwrong choice\n";
		}
		
	}while(choice!=6);
	
	return 0;
}
