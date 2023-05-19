#include <iostream>
using namespace std;
int main()
{
  int A[5]={2,4,6,8,10};

  int n=7,max;
  max=A[0];

  for(int i=1;i<n;i++){
    if(A[i]>max){
        max=A[i];
    }
  }

cout<<"max is "<<max<<endl;
    return 0;
}
