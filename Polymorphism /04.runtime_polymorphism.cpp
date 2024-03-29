
#include <iostream>
using namespace std;
class Car
{
public:

    /*to make pure virtual class
    virtual void start()=0;

    virtual void stop()=0;
    */
    virtual void start() {
        cout << "Car started."; }
    virtual void stop()
    { cout << "Car stopped."; }
};
class innova : public Car
{ // As innova class inherits from car so it gets functions also, as it gets start, stop functions and don't have any role.
    // So Innova should override those functions, and we write as above
public:
    void start() {
        cout << "Innova started." << endl;
        }
    void stop() {
         cout << "Innova stopped." << endl;
          }
};

class swift : public Car
{
public:
    void start() {
         cout << "Swift started."; }
    void stop() {
         cout << "Swift stopped."; }
};
int main()
{
    Car *c = new innova(); // Pointer of type car declared
    c->start();            // Call function on object car as it starts.
    // As object assigned is innova then innova started should be printed so we make car stop
    // function as virtual.
    c->stop();
    // Make car function as virtual to make sure function of innova is activated
    // To the same pointer c we assign swift
    c = new swift();
    c->start();
    cout << endl;
    c->stop();
    return 0;
}
