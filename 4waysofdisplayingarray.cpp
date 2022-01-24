/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class student{
    int age;
    public:
  //  void getdata();
    student();
    student(int);
    void display();
};

/*void student::getdata(){
    
cout<<"\nenter the age: ";
cin>>age;
}   */

student::student(){
    age=0;
}

student::student(int age){
    int a;
    age=a;
}

void student::display(){
    cout<<"the age is: "<<age<<endl;
}

int main()
{
    /*student s1, s2, s3, s4;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s4.getdata();
    s1.display();
    s2.display();
    s3.display();
    s4.display();  */
    
 /*   student s[10];   //memory wasted because only 3 objects used
    int i;
    for(i=0; i<3; i++){
        s[i].getdata();
    }
    
    for(i=0; i<3; i++){
        s[i].display();
    }   */
  
  /*  student *s1;
    s1=new student;
    
    student *s2;
    s2=new student;
    
    student *s3;
    s3=new student;
    
    s1->getdata();
    s2->getdata();
    s3->getdata();
    
    s1->display();
    s2->display();
    s3->display();   */
    
    student *s[10]; 
    int i;     //memory is wasted because 10 pointers are stored but only 3 used
    s[i]=new student(34);
    i++;
    s[i]=new student(24);
    i++;
    s[i]=new student(28);
    i++;
    
 //   int i;
/*    for(i=0; i<3; i++){
        s[i]->getdata();
    }   */
    
 

    for(i=0; i<3; i++){
        s[i]->display();
    }
    
    return 0;
}
