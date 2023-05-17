//declaring variable inside the scope , so after the scope the meemory for the variable is cleared 

//demo
#include <iostream>
using namespace std;
int main(){
int a=10,b=5;

if(true){
    int c=a+b;//c is initialized here, we cant able to use c outside the scope 
    cout<<c<<endl;
}
return 0;

}

//demo 2 
#include <iostream>
using namespace std;
int main(){
int a=10,b=5;
{//empty block
   
int c=a+b; // this c is not need for the entire program, it will need only for the condition if, so we can create 1. empty block or 2. initialize inside the condition
if(c>10){
        //or if(int c=a+b; c>10)   
    cout<<c<<endl;
}
}//empty block
return 0;

}


/*
C++ allows declaration of variables as per our needs within a specified scope or throughout the program that's our choice.
In C we were supposed to declare all the variables in the beginning of a program at one place.
*/
