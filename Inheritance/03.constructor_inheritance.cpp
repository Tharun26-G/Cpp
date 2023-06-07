#include <iostream>
using namespace std;

class Base{
public:
    Base()
    {
        cout<<"Default of Base"<<endl;
    }
Base(int x){

cout<<"Param of Base"<<x<<endl;
}
};

class Derived:public Base
{
public:
    Derived(){
    cout<<"Default of derived";
    }
    Derived(int a){
    cout<<"Param of Derived"<<a;
    }
    Derived(int x,int a):Base(x){
    cout<<"Param of Derived"<<a<<endl;
    }

};

int main(){

Derived d(20,10); //calling the 3rd derived constructor, with the help of that constructor- calling parameterized constructor of base class 
}
