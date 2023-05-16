// net salary
#include <iostream>
using namespace std;
int main()
{

    float basic;
    float per_allow;
    float per_deduct;
    float net;
    cout << "Enter Basic Salary : ";
    cin >> basic;
    cout << "Enter Percentage of Allowances : ";
    cin >> per_allow;
    cout << "Enter Percentage of Deductions : ";
    cin >> per_deduct;
    net = basic + basic * per_allow / 100 - basic * per_deduct / 100;
    cout << "Net Salary is : " << net << endl;
    return 0;
}

//we also use typedef for the salary types 

#include <iostream>
using namespace std;
int main()
{
    typedef float salary;
    salary basic, per_allow, per_deduct, net;
    cout << "Enter Basic Salary : ";
    cin >> basic;
    cout << "Enter Percentage of Allowances : ";
    cin >> per_allow;
    cout << "Enter Percentage of Deductions : ";
    cin >> per_deduct;
    net = basic + basic * per_allow / 100 - basic * per_deduct / 100;
    cout << "Net Salary is : " << net << endl;
    return 0;
}
