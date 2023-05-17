//working hours 

#include <iostream>

using namespace std;
int main(){
 int hour;
 cout<<"Enter hours";
 cin>>hour;

 if(hour>=9 && hour<=18)
 {
     cout<<"working hours";

 }
 else{
    cout<<"leisure";
 }
    return 0;

}

//eligible for offer-||

#include <iostream>

using namespace std;
int main(){
 int age;
 cout<<"Enter age";
 cin>>age;

 if(age<12 || age>50)  //check the age is less than 12 or age is greater than 50
 {
     cout<<"Eligible";

 }
 else{
    cout<<"Not eligible";
 }
    return 0;

}
