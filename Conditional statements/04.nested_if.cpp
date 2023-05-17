//condition inside a condition 
// Program to find the greatest of 3 integers using if-else-if ladder
#include <iostream>

using namespace std;
int main(){
 
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Largest number is : " << a;
    }
    else if (b > c)
    {
        cout << "Largest number is : " << b;
    }
    else
    {
        cout << "Largest number is : " << c;
    }
    /*  In if else-if ladder program takes the maximum time to reach the last condition and due to this in C++ we have
another alternative where we use switch case statements.*/
    return 0;

}

//nature of the roots 

#include <iostream>
#include <cmath>

using namespace std;
int main(){
 float a,b,c,d,r1,r2;
 cout<<"enter a,b,c";
 cin>>a>>b>>c;

 d= b*b-4*a*c;

 if(d=0){
    cout<<"roots are real and equal";
    cout<<endl<<(-b/(2*a));

 }
 else if(d>0){
    cout<<"root are real and unequal";
    cout<<endl<<(-b+sqrt(d)/(2*a));
    cout<<endl<<(-b-sqrt(d)/(2*a));
 }
 else{
    cout<<"Imaginary";
 }

    return 0;

}

//display grades 
#include <iostream>


using namespace std;
int main(){
int m1,m2,m3,total;
float avg;
cout<<"enter marks";
cin>>m1>>m2>>m3;
total = m1+m2+m3;
avg = total/3.0;
if(avg>=60)
    cout<<"A"<<endl;
else if(avg>=35 && avg<60)
    cout<<"B"<<endl;
else
    cout<<"C";
    return 0;

}
