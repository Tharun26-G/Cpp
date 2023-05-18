//for(initialization;condition;updation)


//print n numbers-for loop
#include <iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"enter n";
  cin>>n;
  for(i=1;i<=n;i++){
    cout<<i<<endl;
  }
    return 0;
}

//infinite loop 

#include <iostream>
using namespace std;
int main()
{
  int n,i=0;
  cout<<"enter n";
  cin>>n;
  for(;;){
    cout<<i<<endl;
    i++;
    if(i>=10)
        break;
  }
    return 0;
}
