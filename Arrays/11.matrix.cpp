//addition 
#include <iostream>
using namespace std;
int main()
{

    int A[2][3]={{2,4,6},{3,6,7}};
    int B[2][3]={{6,3,9},{9,4,3}};
    int C[2][3];
    for(int i=0;i<2;i++)//rows
    {
        for(int j=0;j<3;j++)//colums
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//also we can FOR loop for displaying c 
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {3, 3, 3, 3, 3, 3};
    int B[2][3] = {1, 1, 1, 1, 1, 1};
    int C[2][3];
    //adding and storing for loop
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << endl;
    cout << "Sum of 2 matrices comes out to be : " << endl;
    
    //display for loop 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}


//subtraction 

#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {3, 3, 3, 3, 3, 3};
    int B[2][3] = {1, 1, 1, 1, 1, 1};
    int C[2][3];
    //adding and storing for loop
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << endl;
    cout << "sub of 2 matrices comes out to be : " << endl;
    
    //display for loop 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
