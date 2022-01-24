/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, t1=0, t2=1, next=0, i;
    
    cout<<"enter the number of terms:";
    cin>>n;
    
    cout<<"fibonacci series is:";
    
    for(i=1; i<n; i++){
        if(i==1)
        cout<<t1<<",";
        if(i==2)
        cout<<t2<<",";
        next=t1+t2;
        cout<<next<<",";
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    
    cout<<next;
    return 0;
}
