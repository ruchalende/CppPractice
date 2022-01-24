/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a, b, i, temp, gcd;
    
    cout<<"enter two integers:";
    cin>>a>>b;
    
    if(b>a)
    temp=b;
    b=a;
    a=temp;
   
   for(i=1; i<=b; i++)
   if(a%i==0 && b%i==0){
   gcd=i;
   }
   
   cout<<"gcd: "<<gcd;
    return 0;
}
