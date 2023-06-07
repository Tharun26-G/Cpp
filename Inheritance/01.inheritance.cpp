//acquiring information from old class to use in the use class 
// : is used
 #include <iostream>
using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout<<x<<endl;;
    }
};

class Derived:public Base
{

public:
    int y;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

    };

    int main(){
    Base b;
    b.x=12;   //12
    b.show();

    Derived d;
    d.x=23;
    d.show();//23
    d.y=10;
    d.display();//23 10
    }

