/* arrays
1. scalar - x=5
2. vecotr/list - A=(7,6,4,3,4,5)
  
  //array initilization 
  int A[5]={2,3,4,5,6};*/



//priniting particular number 

#include <iostream>
using namespace std;
int main()
{
  int A[5]={2,4,6,8,10};

  cout<<A[0];
    return 0;
}

//printing all the elements of array

#include <iostream>
using namespace std;
int main()
{
  int A[5]={2,4,6,8,10};
for(int i=0;i<5;i++)
  cout<<A[i]<<endl;
    return 0;
}

/* 
Datatypes 

int a[5]
float q[5]
char a[5]

Ways to create and Initialize array :
int a[5]; // Declaration of an array
int b[5] = {1,2,3,5,8}; // Declaration with size and initialization
int c[] = {1,5,8,6,7,136,65}; // Declaration without size with initialization
int d[5] = {1,2} // Declaration with size but partial initialization
int e[5] = {0}; // Declaration with partial initialization. All the values in the array becomes zero.
*/
