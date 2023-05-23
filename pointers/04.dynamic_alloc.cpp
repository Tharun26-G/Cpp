//assigning to the pointer 
#include <iostream>
using namespace std;
int main()
{
  int *p=new int[5];
  p[0]=12;
  p[1]=13;
  cout<<p[1]<<endl;


  delete []p;
  p=nullptr;
    return 0;
}

//array size from user and size of array elements    //not able to alter the array size after the declaration

#include <iostream>
using namespace std;
int main()
{
 int size;
 cout<<"enter number of elements";
 cin>>size;
 int A[size];

 cout<<sizeof A<<endl;
    return 0;
}

//using pointer - alter the size of an array - heap memory 

#include <iostream>
using namespace std;
int main()
{
int *p=new int[20];

delete []p;  //delete before the new size declaration 
p= new int[40];


    return 0;
}
