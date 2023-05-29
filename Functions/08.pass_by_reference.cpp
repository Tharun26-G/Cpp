#include <iostream>
using namespace std;

void swap(int &a,int &b)//formal
{

int temp;
temp =a;
a=b;
b=temp;
}

int main()
{
int x=10,y=20;
swap(x,y);//actual
cout<<x<<" "<<y<<endl;

    return 0;
}

/*call by reference can change the actual 
Use call by reference when you want actual parameters to be modified.
Loops inside call by references can lead to warnings as perfect copying of code by compiler might not happen.
Using call by reference makes the function being called as in-line function.*/
