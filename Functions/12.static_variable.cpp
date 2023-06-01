/*static variable will stay till the program ends but it can access only in the scope 
global variable will stay till the program ends but it can access throughout the program */

//1. without a static 
#include <iostream>
using namespace std;

void fun(){
int a=10;
a++;

cout<<a<<endl;}
int main(){
    fun();//11
    fun();//11

}

//1. with static 
#include <iostream>
using namespace std;

void fun(){
static int a=10;
a++;

cout<<a<<endl;}
int main(){
    fun();//11
    fun();//12

}

// static variable is available in c and c++ but not in java 
