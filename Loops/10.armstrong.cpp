//sum of cube of the digits of the number 
//n=153( 1^3+5^3+3^3 = 153)

#include <iostream>
using namespace std;
int main()
{
  int n,r,sum=0,m;
  cout<<"enter n";
  cin>>n;
m=n;//to prevent the extending of n from 0
  while(n>0){
    r=n%10;
    n=n/10;
    sum=sum+r*r*r;
  }
  if(sum==m)
    cout<<"armstrong number";
  else
    cout<<"not an armstrong";

    return 0;
}
