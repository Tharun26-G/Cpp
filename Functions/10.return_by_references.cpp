#include <iostream>
using namespace std;

int &fun(int &a)
{

cout<<a<<endl;  //10
return a;
}

int main(){
int x=10;
fun(x)=23;//the function value is assigned in the right hand side
cout<<x; //23

}
