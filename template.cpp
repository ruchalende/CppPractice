#include<iostream>
using namespace std;

template <typename T>
T Mymax(T x, T y)
{
	return((x>y)?x:y);
}

int main(){
	cout<<Mymax<int>(7,5)<<endl;
	cout<<Mymax<char>('y', 'e')<<endl;
	cout<<Mymax<string>("abc", "pqr")<<endl;
		
	
	
	return 0;
}
