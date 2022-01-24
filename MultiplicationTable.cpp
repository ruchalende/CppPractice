/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, i, mult;
    
    cout<<"enter the number for which multiplication table in needed:";
    cin>>n;
    
    for(i=1; i<=10; i++){
        mult=n*i;
        cout<<n<<"*"<<i<<"="<<mult<<endl;
    }
    
    
    return 0;
}
