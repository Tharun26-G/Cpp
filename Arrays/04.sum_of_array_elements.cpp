#include <iostream>
using namespace std;
int main()
{
  int A[5]={2,4,6,8,10};

  int n=7,sum=0;

  for(int i=0;i<n;i++){
    sum=sum+A[i];
  }

cout<<"sum is "<<sum<<endl;
    return 0;
}
