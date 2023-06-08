//upon the object - we can access only the public 

 class Base
 {
private: 
   int a;
   protected:
   int b;
   public:
   int c;
   
   void funBase()
   {
     //inside class
     a=10; //accessable
     b=20; //accessable
     c=30; //accessable
   }
 };

class Derived:Base 
{
public:
// inside derived class
funDerived(){
a=1;//not accessable - private
b=2; //accessable
c=3;//accessable
}
};

int main()
{
  //inside object
  Base x;
  x.a=13; //not accessable - private
  x.b=39;//not accessable - protected
  x.c=50;// accessable
}
   
