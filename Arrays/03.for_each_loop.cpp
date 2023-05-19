//used for collection of elements   

#include <iostream>
using namespace std;
int main()
{
  int A[5]={2,4,6,8,10};

  for(auto &x:A) //using &- to modify the value
    cout<<++x<<endl;  //value is copied

    return 0;
}
