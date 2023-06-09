#include <iostream>
using namespace std;

class Base
{

public:
    virtual void fun(){  //virtual is used 
    cout<<"fun of base"<<endl;
    }
};

class Derived:public Base{
 void fun(){
    cout<<"fun of Drived"<<endl;
    }

};

int main()
{
Base *p=new Derived(); //base class pointer and derived class object
p->fun(); //fun() is available both in base and derived but it will call the base fun() - based on the pointer // to overcome the display of the base, we can use virtual keyword then the derived class will be called
}
