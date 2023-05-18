#include <iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"enter n and m";
  cin>>m>>n;
  while(m!=n){
    if(m>n)
        m=m-n;
    else if(n>m)
        n=n-m;
  }
cout<<m; //n also contains same 

    return 0;
}
