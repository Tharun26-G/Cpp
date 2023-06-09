#include <iostream>
using namespace std;

class Base
{

public:
    void fun1(){
    cout<<"fun1 of Base"<<endl;
    }
};

class Derived: public Base {
public:
    void fun2(){

    cout<<"fun2 of Derived"<<endl;
    }

};

int main()
{
    Derived d;
    Base *ptr=&d;
    ptr->fun1();
    // ptr->fun2(); // we can't access the function of derived using the base pointer

    d.fun1(); //we can also able to derive the function from the base class
    d.fun2();




    return 0;
}
