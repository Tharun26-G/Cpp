#include <iostream>
using namespace std;
int main()
{
  int n,r,sum=0;
  cout<<"enter n";
  cin>>n;
//to prevent the extending of n from 0
  while(n>0){
    r=n%10;
    n=n/10;
sum=sum+r;//if sum is multiplied by 10, then it gives reverse of a number
  }
cout<<sum;
    return 0;
}
