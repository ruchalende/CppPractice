#include<iostream>

using namespace std;

struct student{
	char name[10];
	int age;
	char gender;
}s[5];

int main(){
	
	int i, n;
	cout<<"student record\n";
	cout<<"\nenter number of records: ";
	cin>>n;
	
	if(n>5){
		cout<<"\nexceeds 5 records";
		return 0;
	}
	
	for(i=0; i<n; i++){
		cout<<"\n1.name: ";
		cin>>s[i].name;
		cout<<"\n2.age: ";
		cin>>s[i].age;
		cout<<"\n3.gender: ";
		cin>>s[i].gender;
	}
	
	cout<<"\n\nstudent database\n";
	cout<<"sr. no.\tname\tage\tgender\n"<<endl;
	for(i=0; i<n; i++){
		cout<<(i+1)<<"\t"<<s[i].name<<"\t"<<s[i].age<<"\t"<<s[i].gender<<endl;
	}
	
	return 0;
}
