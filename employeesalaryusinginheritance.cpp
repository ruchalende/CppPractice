#include<iostream>

using namespace std;

class general{
	private:
		char name[10];
		char address[10];
		int mobile[10];
		char email[10];
	public:
		void get_general_data();	
};

class employee:public general{
	private:
		int id;
		char designation[10];
		int bp;
	public:
		void get_employee_data();
		int cal();
		void display();
};

void general::get_general_data(){
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter address: ";
	cin>>address;
	cout<<"enter mobile number: ";
	cin>>mobile[10];
	cout<<"enter email address: ";
	cin>>email;
}

void employee::get_employee_data(){
	cout<<"enter employee id: ";
	cin>>id;
	cout<<"enter designation: ";
	cin>>designation;
	cout<<"enter basic pay: ";
	cin>>bp;
}

int employee::cal(){
	int da, hra, pf, fund, salary=0;
	da=0.9*bp;
	hra=0.2*bp;
	pf=0.12*bp;
	fund=0.001*bp;
	salary=bp+da+hra-pf-fund;
	return salary;
}

void employee::display(){
	int total_salary=cal();
	cout<<"\n\nsalary detail: "<<endl;
	cout<<"total salary: "<<total_salary<<endl;
}

int main(){
	general g;
	employee e;
	g.get_general_data();
	e.get_employee_data();
	e.cal();
	e.display();
return 0;
}
