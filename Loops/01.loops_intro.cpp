/*

Loops are iterative statements.
4 types:
while - pre tested loop
do while - post tsted loop
for- counter controlled loop
for each - for collections
*/


//skeleton - while(check and execute)

while(<condtion>)
{
  process;
}

//skeleton - Do-while(execute once and then it check)

do
{
  process;
}
while(<condition>);

//print n numbers - while loop
#include <iostream>
using namespace std;
int main()
{
  int n,i=1;
  cout<<"enter n";
  cin>>n;
  while(i<=n){
cout<<i<<endl;
        i++;
  }
    return 0;
}


//print n numbers - do-while loop
#include <iostream>
using namespace std;
int main()
{
  int n,i=1;
  cout<<"enter n";
  cin>>n;
 do{
cout<<i<<endl;
        i++;
  } while(i<=n);
    return 0;
}

