#include <iostream>
using namespace std;
int main()
{
int A[5]={2,4,5,6,7};
int *p=A;

cout<<*p<<endl;//2
p++;
cout<<*p<<endl;//4
p--;
cout<<*p<<endl;//2 came back 
   return 0;
}

//
#include <iostream>
using namespace std;
int main()
{
int A[5]={2,4,5,6,7};
int *p=A;

cout<<*p<<endl;//without * it will print address //2

cout<<*(p+2)<<endl;//5

    return 0;
}

//accessing all elements 
#include <iostream>
using namespace std;
int main()
{
int A[5]={2,4,5,6,7};
int *p=A;

for(int i=0;i<5;i++)
{
    cout<<*(A+i)<<endl;//2,4,5,6,7
}
    return 0;
}

//distance bewteen 2 pointer 
#include <iostream>
using namespace std;
int main()
{
int A[5]={2,4,5,6,7};
int *p=A,*q=&A[4];

cout<<p-q<<endl; //negative shows how far
cout<<q-p;

    return 0;
}

