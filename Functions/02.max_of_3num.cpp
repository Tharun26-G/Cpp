  #include<iostream>

  using namespace std;
  int max(int a,int b,int c){
  if(a>b&&a>c)
    return a;
  else if(b>c)
  return b;
  else
    return c;

  }
  int main(){
      int x=10,y=23,z=5,r;
    r= max(x,y,z);//function call
    cout<<r<<endl;
    return 0;

  }
