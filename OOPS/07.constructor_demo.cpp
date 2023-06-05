#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle() // Non parameterized constuctor.
    {           // Constructor has same name as class and they don't have any return type.
        length = 1;
        breadth = 1;
    }
    // Parameterized Constructor
    Rectangle(int l, int b) // Doing so compared to what is above is better as it eliminates use of non parameterized constructor by setting default values of l and b if no values are passed by user.
    {
        setLength(l); // Calling set length and set breadth as these functions have validation inside them
        setBreadth(b);
    }
    Rectangle(Rectangle &rect) // Copy constructor : We pass in another constructor as parameter.
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    // Mutators / Setter methods
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
    // Accessors / Getter methods
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
    // Facilitators
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }

};

int main()
{
Rectangle r; // 1 because empty constructor goes to the non-paramaterized 
    //Rectangle r(10, 5); // 50 

    cout << "Area is : " << r.area() << endl;
    cout << "Length of Rectangle is : " << r.getLength() << endl;

    Rectangle r2(r);

    return 0;
}
