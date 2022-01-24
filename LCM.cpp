/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ 
    int a, i, lcm, b;
    
    cout<<"enter two numbers:";
    cin>>a>>b;
    
    
    for(i=1; i++;){
    if(i%a==0 && i%b==0){
    lcm=i;
    break;
    }
    }
   
    
    cout<<"lcm:"<<lcm;
    return 0;
}
