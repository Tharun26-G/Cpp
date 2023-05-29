#include <iostream>
using namespace std;

template <class T>
T maxi(T a, T b){
return a>b?a:b;
}

int main()
{
    cout<<maxi(12,14)<<endl; //insted of writing for the integer and float seperate, we can use template literals for any datatypes 
    cout<<maxi(2.3f,4.5f)<<endl;
    return 0;
}
