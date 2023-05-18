//display the digits in reverse 
#include <iostream>
using namespace std;
int main()
{
  int n,r;
  cout<<"enter n";
  cin>>n;

  while(n>0){
    r=n%10; //used to get the last digit
    n=n/10; //used to remove the last digit by making float and print int 
    cout<<r<<endl;
  }

    return 0;
}
