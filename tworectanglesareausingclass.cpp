#include<iostream>

using namespace std;

class rectangle{
	 int s1, s2;
	public:
		rectangle(int a, int b){
			s1=a;
			s2=b;
		
		}
		void area(){
			cout<<"area of first rectangle is: ";
			float area=s1*s2;
			cout<<area<<endl;
		
			
		}
	};


int main(){
	rectangle r(4, 5), f(5, 8);
	
	r.area();
	f.area();
	
	return 0;
}