//area if various shapes using inheritance
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;

class shape{
    int a;
        public:
            int accept();
            void display(int);
};

class rect:public shape{
    public:
        int rect_square_area(int, int);
        int tri_area(int, int, int);
};

int shape::accept(){
    cout<<"enter dimension: ";
    cin>>a;
    return a;
}

int rect::rect_square_area(int a, int b){
    int s=a*b;
    return s;
}

int rect::tri_area(int a, int b, int c){
    int p, t, s;
    p=(a+b+c)/2;
    t=p*(p-a)*(p-b)*(p-c);
    s=sqrt(t);
    return s;
}

void shape::display(int n){
    cout<<n<<endl;
 //   return n;
}


int main() {
   rect r;
   int n1, n2, n3, s, choice, area;
   
    while(choice!=4){
        cout<<"1.rectangle\n2.square\n3.triangle\n4.exit\n";
        cout<<"enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                n1=r.accept();
                n2=r.accept();
                s=r.rect_square_area(n1, n2);
                cout<<"area of rectangle is: ";
                r.display(s);
                break;
               
            case 2:
                n1=r.accept();
                n2=r.accept();
                s=r.rect_square_area(n1, n2);
                cout<<"area of square is: ";
                r.display(s);
                break;
                
            case 3:
                n1=r.accept();
                n2=r.accept();
                n3=r.accept();
                s=r.tri_area(n1, n2, n3);
                cout<<"area of triangle is: ";
                r.display(s);
                break;
                
            case 4:
                exit(0);
        }
    }
    return 0;
}
