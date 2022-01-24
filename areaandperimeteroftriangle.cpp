#include<iostream>

using namespace std;

class triangle{
	public:
		void area(int a, int b, int c){
			cout<<"area of triangle is: ";
			float area=(a+b+c)/2.0;
			cout<<area<<endl;
			cout<<"perimeter is: "<<(a+b+c)<<endl;
		}
	};


int main(){
	triangle t;
	t.area(2,3,4);
	
	
	return 0;
}
