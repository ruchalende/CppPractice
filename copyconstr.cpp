#include<iostream>

using namespace std;

class sample{
	int num;
	public:
	//void getdata(int);
	sample(int);
	sample();
	sample(sample &);
	void display();
};
/*
void sample::getdata(int a){
	num=a;
}   */

sample::sample(int a){
	cout<<"parameterized constructor called\n";
	num=a;
}

sample::sample(){
	cout<<"default const.\n";
	num=0;
}

sample::sample(sample & x){     //sample x=s1;    //sample & x=s1;
	cout<<"copy const.\n";
	num=x.num;
}
void sample::display(){
	cout<<"\nnum: "<<num;
}
int main(){
	sample s1(10);
	sample s2=s1;   //sample s2(s1)
	//s1.getdata(10);
	sample s3;
	s1.display();
	s2.display();
	s3.display();
	return 0;
}
