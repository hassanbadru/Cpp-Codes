//Hassan A Badru
// COSC230. 002
// 02/25/2009

/* This program prints out the paycheck of an employee with a particular gross amount

Algorithm: declare the variables a, b, c, d, e, f as double
           Then use string for the name
           then input gross amount
           print a, b, c, d, e, f where a = 15 * Gross_Amount / 100, b= 3.5 * Gross_Amount /100, c= 5.75 * Gross_Amount / 100, d= 2.75 * Gross_Amount / 100, e= 5 * Gross_Amount / 100, & f= 75
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double a,b,c,d,e,f;
    string FirstName;
    string LastName;
    char $;
    double Gross_Amount;
    cout << fixed << showpoint << setprecision (2);
    cout <<" Enter name of employee"<< endl;
    cin >> FirstName >> LastName;
    cout <<" Enter Gross Amount"<< endl;
    cin >> Gross_Amount;
    cout << LastName <<", "<< FirstName << endl;
    a= 15 * Gross_Amount / 100;
    b= 3.5 * Gross_Amount /100;
    c= 5.75 * Gross_Amount / 100;
    d= 2.75 * Gross_Amount / 100;
    e= 5 * Gross_Amount / 100;
    f= 75;
    cout <<" Gross Amount: ............" << "$" << Gross_Amount << endl;
    cout <<" Federal TAx : ............." << "$" << a << endl;
    cout <<" State Tax : ..............." << "$" << b << endl;
    cout <<" Social Security Tax : ....." << "$" << c << endl;
    cout <<" Medicare/medicaid Tax : ...." << "$" << d << endl;
    cout <<" Pension Plan : ............" << "$" << e << endl;
    cout <<" Health Insurance : ........." << "$" << f << endl;
    cout <<" Net pay : ................" << "$" << Gross_Amount - (a+b+c+d+e+f) << endl;
    system ("pause");
    return 0;
} 
