//2d array 
//accessing 2d array
#include <iostream>
using namespace std;
int main()
{

    int A[2][3]={{2,4,6},{3,6,7}};
    for(int i=0;i<2;i++)//rows
    {
        for(int j=0;j<3;j++)//colums
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }
    return 0;
}

//for each 
#include <iostream>
using namespace std;
int main()
{

    int A[2][3]={{2,4,6},{3,6,7}};
    for(auto& x:A)//rows
    {
        for(auto& y:x)//colums
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//inputing and accessing 
#include <iostream>
using namespace std;
int main()
{

    int A[2][3];
    for(auto& x:A)//rows
    {
        for(auto& y:x)//colums
        {
            cin>>y;
        }
        cout<<endl;
    }
    for(auto& x:A)//rows
    {
        for(auto& y:x)//colums
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
