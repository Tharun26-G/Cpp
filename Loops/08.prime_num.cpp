#include <iostream>
using namespace std;
int main()
{
  int n,i,count=0;
  cout<<"enter n";
  cin>>n;
 for(i=1;i<=n;i++){

if(n%i==0){
count++;
}
 }
 if(count==2)//for prime, factor should be 2 and less
    cout<<"prime number";
 else
    cout<<"not a prime";


    return 0;
}
