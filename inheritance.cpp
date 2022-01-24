/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class mammals{
    public:
    void display();
   
};

class marineanimals{
    public:
    void display();
};

class bluewhale: public mammals, public marineanimals{
    public:
    void display();
};

void mammals::display(){
    cout<<"I'm a mammal"<<endl;
}

void marineanimals::display(){
    cout<<"I'm a marine animal"<<endl;
}

void bluewhale::display(){
    cout<<"i belong to both categories"<<endl;
}

int main()
{
    mammals m;
    marineanimals ma;
    bluewhale bw;
    
    m.display();
    ma.display();
    bw.display();
   

    return 0;
}
