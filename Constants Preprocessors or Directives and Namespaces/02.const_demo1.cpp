/* 
#include <iostream>

using namespace std;

int main(){
    int x=10;
    int *ptr =&x;

    ++*ptr;

    cout<<*ptr<<" "<<x<<endl; // 11 11 - both have been incremented 

}*/

#include <iostream>

using namespace std;

int main(){
    int x=10;
    const int *ptr =&x;

   // ++*ptr; //not possible to alter the const pointer 

    cout<<*ptr<<" "<<x<<endl; //10 10 


}
