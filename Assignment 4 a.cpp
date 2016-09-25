
//Hassan A Badru
// COSC230. 002
// 02/25/2009
/*Calculates number of tickets sold and at what price

Algorithm: Declare tickets, Then print "Enter the kind of ticket", then input the number of tickets sold, and print the price of tickets and the sum of the price of tickets
*/
#include <iostream>
using namespace std;
int main ()
{
    
    // Declarations
    double box = 250;
    double sideline = 100;
    double premium =50;
    double generalAdmission = 25;
    double ticketBox;
    double ticketSideline;
    double ticketPremium;
    double ticketGeneralAdmission;
    double total;
    cout <<"Enter Number of Box Tickets sold"<< endl; // prompts user to enter value for number of box tickets
    cin >> ticketBox;
    cout <<"\nEnter Number of Sideline Tickets Sold"<<endl;
    cin >> ticketSideline;
    cout <<"\nEnter Number of Premium Tickets Sold"<<endl;
    cin >> ticketPremium;
    cout <<"\nEnter Number of General Admission Tickets Sold"<<endl;
    cin >> ticketGeneralAdmission;
    total = ticketBox+ticketSideline+ticketPremium+ticketGeneralAdmission;// Sum of all tickets sold
    cout<<"\n";
    cout << ticketBox<<" "   << "box tickets were sold at"<< " "<<"$"<< box <<" "<< "each"<< endl;// Displays result of number of tickets for a particular section
    cout << ticketSideline<<" "   << "sideline tickets were sold at"<< " "<<"$"<< sideline <<" "<< "each"<< endl;
    cout << ticketPremium<<" "   << "premium tickets were sold at"<< " "<<"$"<< premium <<" "<< "each"<< endl;
    cout << ticketGeneralAdmission<<" "   << "general admission tickets were sold at"<< " "<<"$"<< generalAdmission <<" "<< "each"<< endl;
    cout<<"Total Number of Tickets Sold is"<<" "<<total<< endl;
    system ("pause");
    return 0;
}
