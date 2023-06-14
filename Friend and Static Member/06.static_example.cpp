#include <iostream>
using namespace std;

class Student{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        roll=++addNo;
        name=n;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Roll no: "<<roll<<endl;
    }
};
int Student::addNo=0;
int main(){
    Student s1("Peter");
    Student s2("John");
    Student s3("Cosmic");
    Student s4("Matthew");
    Student s5("Eric");
    Student s6("Deborah");

    s1.display();
    s3.display();
    cout << "Number of Admissions : " << Student::addNo;

}
