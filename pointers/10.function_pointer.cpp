//Pointer to function 

#include <iostream>
using namespace std;

void display()
{
    cout<<"hello";
}

int main()
{
    void (*fp)( ); //return type of function, pointer  //declaration
    fp=display; //initialization
    (*fp)(); // function call
}

//min-max

#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x > y ? x : y; // Function to return max -> Checks if x>y ? if true then return x : else return y.
}
int min(int x, int y)
{
    return x > y ? y : x; // Function to return min -> Checks if x>y ? if true then return y : else return x.
}

int main()
{
    int (*fp)(int, int); // Declare a function pointer to max or min as prototype same for both functions.
    fp = max;            // Assign fp to max function.
    (*fp)(29, 21);       // Expected return 29 as called on max.

    fp = min;
    (*fp)(29, 21); // Expected return 21 as called on min now.
  
    return 0;
}



/*
Note:
This is like polymorphism. In function over-riding internally functional pointers are used to achieve run-time polymorphism
using function over-riding. One function pointer can point to any function with same signature/prototype.  */
