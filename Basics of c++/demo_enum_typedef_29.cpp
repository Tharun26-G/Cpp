
//enum
#include <iostream>
using namespace std;

enum day{mon,tue,wed,thur,fri,sat,sun};//starts from 0 
int main()
{
    day d;
    d=tue;
    cout<<d<<endl;//result = 1 
              }


//typedef

#include <iostream>
using namespace std;


typedef int marks;//to understand the use of the variables 
int main()
{
    marks m1,m2;
    m1=50;
    m2=90;

    cout<<m1<<"  "<<m2<<endl;
              }
