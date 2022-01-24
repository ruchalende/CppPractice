/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    unsigned int i, n;
    unsigned long long factorial=1;
    
    cout<<"enter number:";
    cin>>n;
    
    for(i=1; i<=n; i++)
    factorial*=i;
    
    cout<<"factorial of "<<n<<" is: "<<factorial;
    return 0;
}
