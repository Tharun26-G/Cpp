#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;//this - used to refer the variable that declared when the constructor as the same name 
        }
   int area(){
   return length*breadth;
   }
   int perimeter();
};

int Rectangle::perimeter()
{
return 2*(length+breadth);
}

int main(){
Rectangle r(10,5);
cout<<r.area()<<endl;
cout<<r.perimeter();
}
