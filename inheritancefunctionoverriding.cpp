// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
/*
class B{
    int num;
    public:
        void getdata();
        void display();
};

void B::getdata(){
    cout<<"accept number: ";
    cin>>num;
}

void B::display(){
    cout<<"\nnumber is: "<<num;
}

class D:public B{   //single inheritance
    int num1;
    public:
        void getdata();
        void display();
};

void D::getdata(){
//    B::getdata();  another way for function overriding
    cout<<"accept number: ";
    cin>>num1;
}

void D::display(){
    cout<<"\nnumber is: "<<num1;
}

/*D: private- int num1;
public- getdata(), display(), getdata(), display()



int main() {
    D d;
    d.B::getdata();  //function overriding
    d.getdata();
    d.display();
    d.B::display();
    return 0;
}
*/

class Base{
    protected:
    int num1, num2, answer;
    public:
        void getdata();
        void display();
        void result();
};

void Base::getdata(){
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
}

void Base::display(){
    cout<<"\noutput is: "<<answer;
}

void Base::result(){
    answer=num1+num2;
}

class Derived:public Base{
    public:
        void result();
};

void Derived::result(){
    answer=num1*num2;
}

int main(){
 /*   Base b;
    b.getdata();
    b.result();
    b.display();  */
     Derived d;
     d.getdata();
     d.result();
     d.display();
    return 0;
}




