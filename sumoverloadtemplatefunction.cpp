//sum using overload template fucntion

#include<iostream>

using namespace std;

template<typename T>
sum(T x, T y){
	int sum;
	sum=x+y;
	cout<<"\nsum: "<<sum<<" (template)";
}

sum(int x, int y){
	int sum;
	sum=x+y;
	cout<<"\nsum: "<<sum<<" (non-template)";
}

int main(){
	sum(1, 2);
	sum(1, 'b');
	sum(4.7, 5.3);
	sum('a', 'b');	
	
	return 0;
}
