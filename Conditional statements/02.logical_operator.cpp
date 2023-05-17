/*Logical operator - for more than one condition 
 && - AND 
 || - OR 
 ! - NOT
 */ 
// The condition using logical operator is called compound conditional statement 
// Program to take age of a person and see whether he is young or not : Young if age >= 12 and <= 30
#include <iostream>

using namespace std;
int main(){
 int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age >= 12 && age <= 30)
    {
        cout << "You are young";
    }
    else if (age > 30 && age < 65)
    {
        cout << "You are part of active working population!";
    }
    else if (age >= 65 && age <= 130)
    {
        cout << "How's retirement coming";
    }
    else
    {
        cout << "IMMORTAL SPOTTED ! ";
    }
return 0;
}

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
