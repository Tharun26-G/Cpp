#include <iostream>
using namespace std;

class Innova
{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};

int Innova::price=20;

int main()
{
    Innova i1,i2,i3;
    cout<<i1.price<<endl;
    cout<<i3.price<<endl;
//calling by creating the object and scope, the scope gives the information without buying the car
    cout<<Innova::price<<endl; 

}
