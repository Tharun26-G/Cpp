#include <iostream>
using namespace std;

class Base
{

public:
    void display(){
    cout<<"Display of base"<<endl;
    }
};

class Derived:public Base{
 void display(){
    cout<<"Display of Drived"<<endl;
    }

};

int main()
{

    Derived d;
    d.display(); // If the base and derived class having the same function with same parameters, then the object created derived have been called //Display of Drived
}
