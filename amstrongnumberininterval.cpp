/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a, b, rem, result, num, i;
    cout<<"enter two three-digit numbers:";
    cin>>a>>b;

    cout<<"amstrong numbers between "<<a<<" and "<<b<<" are:"<<endl;
    for(i=a; i<=b; i++)
    {
        result=0;
        num=i;
        for(; num>0; num/=10)
        {
            rem=num%10;
            result= result + rem*rem*rem;
        }
        
        if(result==i)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}
