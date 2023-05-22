#include <iostream>
using namespace std;
int main()
{
   int a=10;
   int *p=&a;

   cout<<a<<endl;//10
   cout<<&a<<endl;//addr of a
   cout<<p<<endl;//addr of a
   cout<<&p<<endl;//addr of p
   cout<<*p<<endl;//10
    return 0;
}

