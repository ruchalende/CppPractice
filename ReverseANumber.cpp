/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, reverse=0;
    
    cout<<"enter a number:";
    cin>>n;
    
    while(n!=0)
    {
        reverse= reverse*10+n%10;
        n/=10;
    }
 
    cout<<"reversed number is:"<<reverse;
    return 0;
}
