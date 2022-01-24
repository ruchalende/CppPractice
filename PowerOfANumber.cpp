/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float b;
    int e, result=1;
    
    cout<<"enter base:";
    cin>>b;
    
    cout<<"enter exponent:";
    cin>>e;
    
    cout<<b<<"^"<<e<<"=";
    while(e!=0)
    {
            result=result*b;
            --e;
    }
    
    cout<<result;
    return 0;
}
