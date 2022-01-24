/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class degree{
    public:
    degree(){
        cout<<"i got a degree"<<endl;
    }
};

class undergraduate: public degree{
    public:
    undergraduate(){
        cout<<"i am an undergraduate"<<endl;
    }
};

class postgraduate: public degree{
    public:
    postgraduate(){
        cout<<"i am a postgraduate"<<endl;
    }
};

int main()
{
    undergraduate ug;
    postgraduate pg;
   

    return 0;
}

