#include <iostream>
using namespace std;
int main()
{
  int A[5]={2,4,6,8,10};

  int n=7,max;
  max=A[0];

  for(int i=1;i<n;i++){
    if(A[i]>max){
        max=A[i];
    }
  }

cout<<"max is "<<max<<endl;
    return 0;
}

//min 
#include <iostream>
#include <climits>
using namespace std;
int main()
{
  int A[5]={-2,-12,-5,-6,-9};

  int min = INT_MAX;
      for(auto x:A)
      {

        if(x<min)
            min =x;
      }
cout<<"min is"<<min<<endl;

    return 0;
}


//alternate for max

#include <iostream>
#include <climits>
using namespace std;
int main()
{
  int A[5]={-2,-12,-5,-6,-9};

  int max = INT_MIN;
      for(auto x:A)
      {

        if(x>max)
            max =x;
      }
cout<<"max is"<<max<<endl;

    return 0;
}
