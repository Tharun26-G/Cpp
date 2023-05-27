// Having same function but different parameter is known as function overloading 
//we have use same function but parameter  should be different
  #include<iostream>

  using namespace std;
  int add(int x,int y){
  return x+y;
  }

int add(int x,int y,int z){
return  x+y+z;
}
  int main(){
      int x=10,y=23,z,r;
z=add(x,y);//33
cout<<z<<endl;
r=add(x,y,z);//66
cout<<r;

  }

