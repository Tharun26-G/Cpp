//perfect number is sum of factor of a number should be equal to twice of a number

#include <iostream>
using namespace std;
int main()
{
  int n,i,sum=0;
  cout<<"enter n";
  cin>>n;
 for(i=1;i<=n;i++){

if(n%i==0){
    sum=sum+i;
}
 }

 if(2*n=sum){
    cout<<"perfect number";
 }
 else{
    cout<<"not a perfect number";
 }

    return 0;
}

