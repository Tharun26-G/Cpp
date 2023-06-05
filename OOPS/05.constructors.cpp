#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    /*Rectangle() // Non parameterized constuctor.
    {           // Constructor has same name as class and they don't have any return type.
        length = 0;
        breadth = 0;
    }
    */

    // Rectangle(int l, int b)             // Parameterized Constructor
    Rectangle(int l = 0, int b = 0) // Doing so compared to what is above is better as it eliminates use of non parameterized constructor by setting default values of l and b if no values are passed by user.
    {
        setLength(l); // Calling set length and set breadth as these functions have validation inside them
        setBreadth(b);
    }
    Rectangle(Rectangle(&rect)) // Copy constructor : We pass in another constructor as parameter.
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    // As there are 3 functions with same names we can say these to be overloaded constructors. We can have many constructors.
};
int main()
{
    // Rectangle r; // Calls the non parameterized constuctor even r() can be used and sets length = 0 and breadth = 0
    Rectangle r(10, 5); // Calls the parameterized constructor and sets length and breadth as 10 and 5 respt.

    // r.setLength(5); // Not needed when you have constructor in place.
    // r.setBreadth(10); // Not needed when you have constructor in place.
    cout << r.area()<<endl;
    cout << r.getLength();
    // Creating a new rectangle using copy constructor
    Rectangle r2(r); // Create r2 by sending r. By sending Rectangle object r as parameter we create another Rectangle.
    // r2 would also have length and breadth as 10 and 5 respt.
    return 0;
}
 
