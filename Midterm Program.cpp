// Midterm Program
// Name: Hassan A Badru
// Student ID: 00039633
// Class and section: COSC230.002
// Date: 03/17/2009
/* Asssignment:  calculate and display the sum of the integers from 1 to 12, inclusive. Use the three (3) separate C++ repetition structures to completely
   calculate and display the results;
	1) For repetition structure
	2) While repetition structure
	3) Do-While  repetition structure
*/
// This program adds up all the numbers from 1 to 12 using the the repition structures; For, While, and Do-While
// declaring i = 1 and sum equals to 0, 
// adding sum to i will produce sum
// if i increases by 1 i.e. i++, the sum would become "sum + i + 1", then the next would be "sum + i + 2*1" and on and on it goes till sum becomes 
//"sum + i + n*1" where n is used as a for, while, and do- while statement respectively 
// the program excecutes until the for, while, or do-while statement is no longer true
// Then the final value "sum" would be displayed as an output

# include <iostream> // allows program to output data on the screen
using namespace std;
int main() // start top level program with integer return data type
{
    
cout<<"Name: " << "    Hassan A Badru" << endl; //Name
cout << "Student: " << " 00039633" << endl; //Student ID
cout << "Class ID: " << "COSC230.002" << endl; //Class ID
cout << "Date: " << "    03/17/2009" << endl; //Date Created

int i; // declaring i as a variable
int sum ; // declaring sum as a variable


cout << "--------------------------------------------------------------"<<endl; // my form of seperation between the different programs 
cout << " 1.) Using For repetition structure" << endl; // describing the kind of repition structure used

sum = 0; //declaring the sum starting from a value of 0
for (i = 1; i <= 12; i++) //using the for statement
sum = i + sum; //declaring the value of sum
cout <<" Sum of Integers from 1 to 12 is "<< sum <<endl; // Outputs the sum

cout << "--------------------------------------------------------------"<<endl; // my form of seperation between the different programs 
cout << " 2.) Using While repetition structure" << endl; // describing the kind of repition structure used

sum = 0; // declared sum to be equal to 0

i = 1; //declaring i to be equal to 1
while (i <= 12) //using the while statement
{
sum = i + sum; //declaring the value of sum
i++; //incrementing i
}
cout <<"Sum of Integers from 1 to 12 is " << sum << endl; //outputs the sum

cout << "--------------------------------------------------------------"<<endl; // my form of seperation between the different programs 
cout << " 3.) Using Do-While repetition structure" << endl; // describing the kind of repition structure used

i=1;  //declaring i to be equal to 1
sum = 0; // declared sum to be equal to 0

do  //using the do-while statement
{ 
    sum = i + sum; // declaring the value of sum
    i++; //incrementing i
}
while (i <= 12); 
cout << "Sum of Integers from 1 to 12 is " << sum << endl; //outputs the sum

cout << "--------------------------------------------------------------"<<endl; // my form of seperation between the different programs 

system ("pause"); //freeze the screen
return 0; // end program successfully
}
/*
Name:     Hassan A Badru
Student:  00039633
Class ID: COSC230.002
Date:     03/17/2009
--------------------------------------------------------------
Using For repetition structure
 Sum of Numbers From 1 to 12 is 78
--------------------------------------------------------------
Using While repetition structure
Sum of Numbers from 1 to 12 is: 78
--------------------------------------------------------------
Using Do-While repetition structure
Sum of integers from 1 to 12 is 78
--------------------------------------------------------------
Press any key to continue . . .
*/
