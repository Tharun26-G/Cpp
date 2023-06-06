//function which is in the same line of call 

class Test
{
  public:
  void fun1()
  {
    cout<<"Inline";
  }
 inline void fun2(); //though the function is written outside the scope, it is taken as inline because of keyword-inline 
};

void Test::fun2()
{
  cout<<"non-inline";
}

int main(){
  test t;
  t.fun1();
  t.fun2();
}
