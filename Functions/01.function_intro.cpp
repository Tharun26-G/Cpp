// return-type function-name(Paramater list)
//   o/p                            i/p

//demo 1 - for function call 
 #include<iostream>

  using namespace std;
  void msg(){
  cout<<"hello";
  }
  int main(){
      msg();
  }

//add two numbers

  #include<iostream>

  using namespace std;
  int add(int x,int y){
  int z;
  z=x+y;

  return z;
  }
  int main(){
      int a=10,b=23,c;
    c= add(a,b);//function call
    cout<<"sum is"<<c;

  }
