#include <iostream>
using namespace std;
int main()
{
  int n,r,rev=0,m;
  cout<<"enter n";
  cin>>n;
m=n;
  while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
  }

  cout<<rev;
if(rev==m)
    cout<<"number is palindrome";
else
    cout<<"not a palindrome";
    return 0;
}
//we can aslo do while loop
