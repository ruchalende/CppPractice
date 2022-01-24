/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class complex{
    int real, img;
    public:
    void getdata();
    void add(complex, complex);
    void display();
};

void complex::getdata(){
    cout<<"enter real number:";
    cin>>real;
    cout<<"enter imaginary number:";
    cin>>img;
}

void complex::add(complex x, complex y){
    this->real=x.real+y.real;
    this->img=x.img+y.img;
}

void complex::display(){
    cout<<"addition of thw two complex numbers is: "<<real<<"+"<<img<<"i"<<endl;
}


int main()
{
   complex c1, c2, c3;
   c1.getdata();
   c2.getdata();
   c3.add(c1, c2);
   c3.display();
    return 0;
}
