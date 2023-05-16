// assigning the code to the constant - enum 
// Enum is used to define a group of related constants under one name.
enum day{mon,tue,wed,thu,fri,sat,sun};//day is defined datatype by the user , it will n=automatically gives code where mon=0,tue=1 and so on

//example

enum dept{cs=1,it,civil};//it will start from 1, because we mentioned to start from 1 
int main()
{
  dept d;
  d=cs;
  ....
  }


// //Typedef
// typedef used to define our own data type or giving alias to some other data type, so it is
// easier for us to keep track, prevent errors and make code more readable.


typedef int marks;
typedef int rollno;
int main()
{
  marks m1,m2,m3;
  rollno r1,r2,r3;
  
  
}
  //note: to make a better readability 
