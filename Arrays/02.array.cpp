#include <iostream>
using namespace std;
int main()
{
  int A[5]={2,4,6,8,10};

  for(int x:A) //print all elements in the array - use when we don't the size of an array//use for dsa 
    //for(auto x:A) - use AUTO if we don't know the datatype 
    cout<<x<<endl;
  
  //char 
  char e[5] = {'A', 66, 'C', 68, 'E'}; // No need to know the type of array.
    cout << "Completely Initialized Char Array E with auto : " << endl;
    for (auto z : e)
        cout << z << endl;
    cout << endl;
    
    return 0;
}
