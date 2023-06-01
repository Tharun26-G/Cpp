/* variable inside the function is local variable 
variable outside the function is global variable */

#include <iostream>
using namespace std;

int g=5;
void fun(){
int a=10;
a++; // 11
g++; // 6
cout<<a<<" "<<g<<endl;}
int main(){
    cout<<g<<endl;  //1.  5
    fun();
    cout<<g<<endl; // 6 
}
