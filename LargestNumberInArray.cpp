/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, j, no, max;
    int arr[i];
    
    cout<<"enter number of elements:";
    cin>>no;
    //following for loop is used to put values in array 
    for(i=0; i<no; i++){
        cout<<"enter element:";
        cin>>arr[i];
    };
    //for displaying the array
    cout<<"the array is:";
    for(j=0;   j<no;   j++){
        cout<<" "<<arr[j];
    };
    
    max=arr[0];
    for(i=1;   i<no;    i++){
        if(max<arr[i])
        max=arr[i];
    };
    
    cout<<"\nlargest element:"<<max;
    
    
    
    return 0;
}
