#include <iostream>
using namespace std;
int main()
{
    int key,n=5;
  int A[5]={2,4,6,8,10};

  cin>>key;//element to search 
for(int i=0;i<n;i++){
    if(key==A[i]){
        cout<<"found"<<i;
        return 0;
    }

}
        cout<<"not found"; //outside the for loop, because it have check in the entire array
}

//array value from user - use FOR loop 


#include <iostream>
using namespace std;
int main()
{
    int key,n=5;
  int A[5];

  cout<<"enter array";
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
cout<<"enter key to search";
  cin>>key;
for(int i=0;i<n;i++){
    if(key==A[i]){
        cout<<"found"<<i;
        return 0;
    }


}

        cout<<"not found";
}
