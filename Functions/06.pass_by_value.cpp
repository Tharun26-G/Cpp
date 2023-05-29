/*
C++ allows passing or call by using 3 different methods 

1. Call by value or Pass by value
2. Call by address
3. Call by reference
*/

#include <iostream>
using namespace std;

void swap(int a,int b)//formal
{

int temp;
temp =a;
a=b;
b=temp;
cout<<a<<" "<<b<<endl;//swap the value only in the block 
}

int main()
{
int x=10,y=20;
swap(x,y);
cout<<x<<" "<<y<<endl;  //actual //10  20
//the change in the formal will not affect the actual

    return 0;
}
