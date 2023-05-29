#include <iostream>
using namespace std;

void swap(int *a,int *b)//formal
{

int temp;
temp =*a;
*a=*b;
*b=temp;

}

int main()
{
int x=10,y=20;
swap(&x,&y);
cout<<x<<" "<<y<<endl;//actual

    return 0;
}

//through the call by address the actual value will be swap with the help of pointers.
