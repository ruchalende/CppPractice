
//addition of two numbers taken from different objects and added in third object

#include <iostream>

using namespace std;

class addition{
    private:
    int num1, num2;
    public:
    void getdata();
    void display(addition a1, addition a2);
    void add(addition a1, addition a2);
};

void addition:: getdata(){
    cout<<"enter first element:";
    cin>>num1;
    
    cout<<"enter second element:";
    cin>>num2;
}

void addition::display(addition a1, addition a2){
//	addition a1, a2;
    cout<<a1.num1<<"\t"<<a2.num2;
}

void addition::add(addition a1, addition a2){
//	addition a1, a2;
    int sum=a1.num1+a2.num2;
    cout<<"\nsum of "<<a1.num1<<" and "<<a2.num2<<" is: "<<sum;
}


int main()
{
    addition a1, a2, a3;
    
 //   int num1, num2;
    a1.getdata();
    a2.getdata();
    
    a3.display(a1, a2);
    a3.add(a1, a2);
    

    return 0;
}

