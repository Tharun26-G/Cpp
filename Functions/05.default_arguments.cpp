#include <iostream>
using namespace std;

int sum(int a,int b,int c=0)//c is intialized to 0, if the c value is not given then it take as 0 otherwise the value in the main//c is optional 
{
    return a+b+c;
}
int main()
{
    cout<<sum(10,3)<<endl;
    cout<<sum(12,34,45)<<endl;

    return 0;
}
