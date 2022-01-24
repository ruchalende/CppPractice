#include <iostream>
using namespace std;

template<class T>
void swap_num(T a, T b){
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nswapping is: ";
    cout<<a<<"\t"<<b;
}

int main() {
    int x, y;
    cout<<"\nenter first number: ";
    cin>>x;
    cout<<"\nenter second number: ";
    cin>>y;
    
    swap_num(x, y);
    
    double m, n;
    cout<<"\nenter first number: ";
    cin>>m;
    cout<<"\nenter second number: ";
    cin>>n;
    
    swap_num(m, n);
   

    return 0;
}
