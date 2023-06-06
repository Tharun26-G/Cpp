#include <iostream>
using namespace std;


class Student
{
private:
    int roll;
    string name;
    int maths;
    int phy;
    int chem;

public:
    Student(int r,string n,int m,int p,int c)
    {
        roll=r;
        name=n;
        maths=m;
        phy=p;
        chem=c;
    }
    int total(){
    return maths+phy+chem;
    }

    char grade(){
    float avg= total()/3;
    if(avg>60)
        return 'A';
    else if(avg>=40 && avg<60)
        return 'B';
    else
        return 'C';

    }
};


int main(){
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter roll number"<<endl;
    cin>>roll;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"enter maths,phy,chem marks"<<endl;
    cin>>m>>p>>c;

    Student s(roll,name,m,p,c);
    cout<<"Total"<<s.total()<<endl;
    cout<<"Grade "<<s.grade()<<endl;


}
