 //conditional statement 

//skeleton 

/*if(<condtion>)
{
  ....
    ....
  }
else {
  ....
  }*/

//how to write conditional statements - By using Relational operation such as <,<=,>,>=,==, != and also logical operator 

//it returns TRUE or FALSE , where false = 0 and true = 1 or alll non-zero value 


//FINDING MAXIMUM OF 2 NUMBERS

#include <iostream>
using namespace std;
int main(){
    int x,y;
cout<<"Enter 2 numbers"<<endl;
cin>>x>>y;
if(x>y){
    cout<<"X is greater";
}
else{
    cout<<"Y is greater";
}
return 0;
}

//Rollno valid or not 

#include <iostream>

using namespace std;

int main(){
    int roll;
    cout<<"enter roll no";
    cin>>roll;

    if(roll<1){
        cout<<"Invalid roll no";
    }
else{
    cout<<"Valid roll no";
}
return 0;
}


//valid division or not 

#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"enter 2 no";
    cin>>a>>b;
    if(b==0){
        cout<<"Division by zero "<<endl;
    }
    else{
        c=a/b;
        cout<<c;
    }
return 0;
}

