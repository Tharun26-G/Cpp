#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0);
    int getlength();
    int getbreadth();
    void setlength(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
};

class Cuboid : public Rectangle {
private:
    int height;

public:
    Cuboid(int h = 0);
    int getheight();
    void setheight(int h);
    int volume();
};

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

int Rectangle::getlength() {
    return length;
}

int Rectangle::getbreadth() {
    return breadth;
}

void Rectangle::setlength(int l) {
    length = l;
}

void Rectangle::setbreadth(int b) {
    breadth = b;
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

Cuboid::Cuboid(int h) {
    height = h;
}

int Cuboid::getheight() {
    return height;
}

void Cuboid::setheight(int h) {
    height = h;
}

int Cuboid::volume() {
    return getlength() * getbreadth() * height;
}

int main() {
    Cuboid c(5);
    c.setbreadth(10);
    c.setlength(7);
    cout << "Volume is " << c.volume() << endl;
    return 0;
}
