#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
class stack{
	int top;
	T arr[5];
	
	public:
		stack(){
			top=-1;
		}
		
	void push();
	void pop();
	void display();
	bool isempty();
	bool isfull();
};

template<class T>
bool stack<T>::isempty(){
	return (top==(-1));
}

template<class T>
bool stack<T>::isfull(){
	return (top==4);
}

template<class T>
void stack<T>::push(){
	if(isfull()){
		cout<<"stack overflow\n";
	}
	else{
		int a;
		cout<<"enter element to push into stack: ";
		cin>>a;
		++top;
		arr[top]=a;
	}
}

template<class T>
void stack<T>::pop(){
	if(isempty()){
		cout<<"stack is empty\n";
	}
	else{
		cout<<"popped element is "<<arr[top]<<"\n";
		top--;
	}
}

template<class T>
void stack<T>::display(){
	if(isempty()){
		cout<<"stack is empty\n";
	}
	else{
		int i;
		for(i=top; i>=0;i--){
			cout<<arr[i]<<"\n";
		}
	}
}


int main(){
	stack<int>s;
//	stack<float>f;
	int choice;
	while(choice!=5){
		cout<<"1.push\n2.pop\n3.display\n4.exit\n";
		cout<<"enter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				s.push();
		//		f.push();
				break;
			
			case 2:
				s.pop();
		//		f.pop();
				break;
		     	
			case 3:
				cout<<"integer stack:\n";
				s.display();
		//		cout<<"float stack:\n ";
		//		f.display();
				break;
				
			case 4:
				exit(0);
		}
	}
	
	
	
	
	return 0;
}
