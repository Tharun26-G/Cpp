//condition for binary search -- should be in sorted array  
#include <iostream>

using namespace std;
int main()
{
  int A[5]={1,2,3,4,5};

  int l=0,h=4,key,mid;//l=initial array index, h= max array index
  cout<<"enter key";
  cin>>key;

  while(l<=h){
    mid=(l+h)/2;
    if(key==A[mid]){
        cout<<"Found at"<<mid;
        return 0;

    }
    else if(key<A[mid])
        h=mid-1;

else
    l=mid+1;
  }
cout<<"not found";

    return 0;
}
