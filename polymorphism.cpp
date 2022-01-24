#include<iostream>
#include<cmath>

using namespace std;

float pi=3.141592653589793238;

class container{
	protected:
		float height;
		float width;
		float radius;
		
	public:
		void set_volume(float h, float w, float r){
		height=h;
		width=w;
		radius=r;
	}
};

class sphere: public container{
	public:
		float volume(){
			float v=((4/3)*pi*pow(radius, 3));
		}
};

class cylinder: public container{
	public:
		float volume(){
			float v=pi*pow(radius, 2)*height;
		}
};


int main(){
	sphere s;
	cylinder c;

	
	container *container1=&s;
	container *container2=&c;
	
	container1->set_volume(45, 12, 23);
	container2->set_volume(3, 30, 20);

	
	cout<<s.volume()<<endl;
	cout<<c.volume()<<endl;

	
		
	return 0;
}
