/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int a, b, c, x1, x2, determinant, real, imaginary;
   
   //taking coefficients of quadratic equation
   
   cout<<"enter a, b and c respectively:";
   cin>> a >> b >> c;
   
   determinant= b*b - 4*a*c;
   
   if (determinant>0){
       
       x1=(-b+sqrt(determinant))/2*a;
       
       x2=(-b-sqrt(determinant))/2*a;
       
       cout<< "roots are real and different." <<endl;
       
       cout<< "x1=" <<x1<<endl;
       
       cout<< "x2=" <<x2<<endl;
       
   }
   
   else if (determinant==0) {
       
       x1=(-b+sqrt(determinant))/2*a;
       
       cout<< "roots are real and same." <<endl;
       
       cout<< "x1=" <<x1<<endl;
       
       cout<< "x2=" <<x1<<endl;
   }
       else {
           
           real=b*b-4*a*c;
           
           imaginary=sqrt(-determinant)/2*a;
           
       cout<< "roots are imaginary and different." <<endl ;
       
       cout<< "x1=" <<real<<"+"<<imaginary<<"i"<<endl;
       
       cout<< "x2=" <<real<<"+"<<imaginary<<"i"<<endl;
       
   }
   

    return 0;
}
