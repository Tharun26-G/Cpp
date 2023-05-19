
//print 1 in 4*4
#include <iostream>
using namespace std;
int main()
{
    int count=1;
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <4; j++)
        {
          cout<<count<<" ";
        }
        cout<<endl;
    }

    return 0;
}
//start pattern 
#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <4; j++)
        {
            if(i>=j)
          cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
/*output
*
* *
* * *
* * * *       

*/


//start reverse 

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <4; j++)
        {
            if(i>j)
          cout<<" ";
          else
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//output
// ****
//  ***
//   **
//    *


/*for this patterr
* * * *
 * * *
  * *
   *  
  
  just need a space after the cout * (cout<<"* ";)
*/


//pattern from right side 

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <4; j++)
        {
            if(i+j>=4-1)    //using the condition of adding i and j i.e the row and column if the sum is greater than 3 then print * (4-1 is the size of the array)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
/*output

   *
  **
 ***
****

*/




/* pattern tips 

if(i<=j) 
* * * * *
  * * * *
    * * * 
      * * 
        * 


if(i+j>5)
cout<<"* ";
else
cout<<"  ";//2 space  

          *
        * *
      * * *
    * * * *
  * * * * *
    
    
if(i+j<5)
cout<<"* ";
else
cout<<"  ";//2 space      
* * * * *
* * * *
* * *
* *
*



 for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
         cout<<"* ";

    }
*
* *
* * *
* * * *
* * * * *


*/
