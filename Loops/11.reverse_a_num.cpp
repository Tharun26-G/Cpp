// n=153
//   0 x 10 + 3 =3
//   3 x 10 + 5 =35
//   35 x 10 + 1 =351
   #include <iostream>
using namespace std;
int main()
{
  int n,r,rev=0,m;
  cout<<"enter n";
  cin>>n;
m=n;//to prevent the extending of n from 0
  while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
  }
cout<<rev<<endl;
    return 0;
}
