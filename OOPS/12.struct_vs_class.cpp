//struct example 

#include <iostream>
using namespace std;


struct Demo{

int x;
int y;

void Display()
{
cout<<x<<" "<<y<<endl;

}
};

int main()
{

    Demo d;
    d.x=10;
    d.y=20;
    d.Display();
}

/* 
In c++, the struct can have function 
struct and class is almost same, the difference  is private is accessible in struct and 
only if the public is mention- the class will have the access


*/
