#include <iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"enter n";
  cin>>n;
 for(i=1;i<=n;i++){

if(n%i==0)
    cout<<i<<endl;

 }


    return 0;
}


//sum of facctor

#include <iostream>
using namespace std;
int main()
{
  int n,i,sum=0;
  cout<<"enter n";
  cin>>n;
 for(i=1;i<=n;i++){

if(n%i==0){
    sum=sum+i;
}

 }
cout<<sum;

    return 0;
}
