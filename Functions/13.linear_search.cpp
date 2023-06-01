#include <iostream>
using namespace std;

int Search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(key==A[i])
        return i;
    return 0;
}

int main(){
int A[]={2,3,45,6,33,8,9,0};

int k;
cout<<"enter an element to be searched:";
cin>>k;

int index=Search(A,7,k);
cout<<"element found at index: "<<index<<endl;
}
