class Test{
  
  private:
  int a;
  protected:
  int b;
  public:
  int c;
  
  friend void fun(); //making friend as a function, can give the access of private and protected outside the scope 
};

void fun()
{
  Test t;
  t.a=10;
  t.b=12;
  t.c=4;
}
