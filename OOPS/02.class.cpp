//example to class and objects 

#include <iostream>
using namespace std;

class Rectangle{
public:
int length;

int breadth;

int area(){
return length*breadth;
}
int perimeter(){
return 2*(length+breadth);
}


};

int main(){
Rectangle r1,r2;
r1.length=10;
r1.breadth=5;
cout<<"area is "<<r1.area()<<endl;


r2.length=19;
r2.breadth=20;
cout<<"perimeter is "<<r2.perimeter();
}
