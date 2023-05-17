//more than one nested if 
#include <iostream>
using namespace std;
int main(){
int day;
cout<<"enter day number";
cin>>day;
if(day==1)
{
    cout<<"mon"<<endl;
}
else if(day==2)
{
    cout<<"tue"<<endl;
}
else if(day==3)
{
    cout<<"wed"<<endl;
}
else
    cout<<"invalid"<<endl;
    return 0;

} //in this case, the work is more, they have to check for every condition 

//we can use SWITCH STATEMENT 

//short circuit 

// and - if one condition is false it will not check for other condition 
// or - one of the condition is true then it return true

//example 

#include <iostream>


using namespace std;
int main(){
int a=10,b=5,i=5;
if(a>b && ++i<=b) //i=6
//if(a<b && ++i<=b) //i=5
 //if(a>b || ++i<=b) //i=5
  //if(a<b || ++i<=b) //i=6
    
{
}
cout<<i<<endl;
    return 0;

}
