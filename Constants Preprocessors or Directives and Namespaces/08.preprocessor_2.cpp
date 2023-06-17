// also use in function 

#include <iostream>

using namespace std;

#define MUL(x) (x*x)

#define MSG(x) #x   //convert the value of MSG to string #


int main(){
   cout<<MUL(5)<<endl;

   cout<<MSG(Hello);

}
