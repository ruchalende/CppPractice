/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.


average of numbers using array

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int i, n;
  
   
   cout<<"enter number of elements in the array: ";
   cin>>n;
   
   int arr[n];
   
   float sum=0.0;
   
   for(i=0; i<n; i++){
   cout<<i+1<<". enter element: ";
   cin>>arr[i];
   sum+=arr[i];
   }
  
   cout<<"sum: "<<sum<<endl;
   float avg=sum/n;
   
   cout<<"average: "<<avg<<endl;

    return 0;
}
