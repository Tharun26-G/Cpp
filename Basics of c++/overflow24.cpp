//overflow 
//note: char range is -128 to 127
char x=127; // it reaches the maximum of 127 so it reverse to -128 
x++;
cout<<(int)x;//result as -128

//complete code 

#include<iostream>

using namespace std;

int main(){
  char x=127;
  x++;
  cout<<(int)x<<endl;
return 0;
}


//for max_integer 

int x=INT_MAX;
