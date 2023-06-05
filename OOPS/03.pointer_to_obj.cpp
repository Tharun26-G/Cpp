// . used to access the object using variable name 
// -> used to access the object using pointer 


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
Rectangle r;
Rectangle *p;
p=&r;

p->length=10;
p->breadth=5;
cout<<"area is "<<p->area()<<endl;
  cout<<"perimeter is "<<p->perimeter()<<endl;

}

//creating object in heap using pointer 

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

Rectangle *p = new Rectangle; //heap //created dynamic obj


p->length=10;
p->breadth=5;
cout<<"area is "<<p->area()<<endl;
 cout<<"perimeter is "<<p->perimeter()<<endl;
}
