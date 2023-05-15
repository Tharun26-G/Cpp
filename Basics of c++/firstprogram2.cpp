//how to write program
//steps
//1.Input
//2.process
//3.output

//program to add two numbers

#include <iostream>

using namespace std;

int main(){
    int a,b,c;
cout<<"Enter two numbers";
cin>>a>>b;
c=a+b;
cout<<"Addition is" <<c;
return 0;
}
//program of welcome message

#include <iostream>

using namespace std;

int main(){
    string name;//It will give only one word-problem
    cout<<"May I know your name ";
   //for more than one word this will not work- cin>>name;
  getline(cin,name);
  
    cout<<"Welcome "<<name;

return 0;
}

