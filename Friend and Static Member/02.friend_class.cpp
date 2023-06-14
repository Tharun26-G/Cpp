class Your; //just giving the name of the class to make friend 
class My
{
  private:
  int a=10;
  friend your;  // making the class as friend so it can be access in the private, protected 
};

class Your
{
  public:
  My m;
  void fun()
  {
    cout<<m.a;
  }
};
