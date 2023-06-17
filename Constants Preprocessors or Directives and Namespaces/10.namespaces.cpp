//used for removing name conflicts 

#include <iostream>
using namespace std;
namespace First //encapsulating within namespaces
{
    void func()
    {
        cout << "First";
    }
} // namespace First

namespace Second
{
    void func()
    {
        cout << "Second";
    }
} // namespace Second

//using namespace First // we can also declare here
int main()
{
    First::func();
    cout << "\n";
    return 0;
}
