//static is called upon the object and also the upon the class 
#include <iostream>
using namespace std;

class Test{
public:
    int a;
    static int count;

    Test(){
    a=10;
    count++;
    }

    static int getCount(){ //static funtion - inside the static function only static variable will be used 

    return count;
    }
};

int Test::count=0;

int main()
{
    Test t1,t2;
    cout<<Test::getCount()<<endl;
    cout<<t1.getCount()<<endl;

}
